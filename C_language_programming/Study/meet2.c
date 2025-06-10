#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <curl/curl.h>
#include <libxml/HTMLparser.h>

// 回调函数，用于处理返回的数据
size_t write_callback(void *contents, size_t size, size_t nmemb, void *userp)
{
    size_t total_size = size * nmemb;
    char *data = (char *)userp;
    strncat(data, (char *)contents, total_size);
    return total_size;
}

// 获取信息
char* get_info(char* name)
{
    // 构造搜索URL
    char url[256];
    sprintf(url, "https://www.example.com/search?q=%s", name);
    
    // 初始化libcurl
    curl_global_init(CURL_GLOBAL_DEFAULT);
    CURL *curl = curl_easy_init();
    
    if(curl)
    {
        // 设置回调函数
        char data[4096] = "";
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, write_callback);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, data);
        
        // 发送GET请求
        curl_easy_setopt(curl, CURLOPT_URL, url);
        CURLcode res = curl_easy_perform(curl);
        
        // 检查请求是否成功
        if(res != CURLE_OK)
        {
            fprintf(stderr, "curl_easy_perform() failed: %s\n", curl_easy_strerror(res));
            return NULL;
        }
        
        // 解析HTML
        htmlParserCtxtPtr ctxt = htmlCreatePushParserCtxt(NULL, NULL, NULL, 0, NULL, 0);
        htmlParseChunk(ctxt, data, strlen(data), 0);
        htmlParseChunk(ctxt, NULL, 0, 1);
        int result = htmlCtxtUseOptions(ctxt, HTML_PARSE_NOERROR | HTML_PARSE_NOWARNING);
        
        // 检查解析是否成功
        if(result != 0)
        {
            fprintf(stderr, "htmlCtxtUseOptions() failed\n");
            return NULL;
        }
        
        // 查找信息
        xmlDocPtr doc = htmlCtxtDoc(ctxt);
        xmlNodePtr root = xmlDocGetRootElement(doc);
        xmlNodePtr cur = root->children;
        while(cur != NULL)
        {
            if(xmlStrcmp(cur->name, (const xmlChar *)"div") == 0 && xmlHasProp(cur, (const xmlChar *)"class") && xmlStrcmp(xmlGetProp(cur, (const xmlChar *)"class"), (const xmlChar *)"info") == 0)
            {
                char* info = (char *)malloc(strlen((char *)xmlNodeGetContent(cur)) + 1);
                strcpy(info, (char *)xmlNodeGetContent(cur));
                return info;
            }
            cur = cur->next;
        }
        
        // 清理
        xmlFreeDoc(doc);
        htmlFreeParserCtxt(ctxt);
        curl_easy_cleanup(curl);
    }
    
    curl_global_cleanup();
    
    return NULL;
}

int main()
{
    // 用户输入人物名称
    char name[256];
    printf("请输入人物名称：");
    scanf("%s", name);
    
    // 获取信息
    char* info = get_info(name);
    
    // 打印信息
    if (info)
    {
        printf("%s\n", info);
        free(info);
    }
    else
    {
        printf("无法获取信息\n");
    }
    
    return 0;
}