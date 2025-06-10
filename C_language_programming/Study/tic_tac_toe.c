#include <stdio.h>

int main()
{
    const int SIZE = 3;
    int board[SIZE][SIZE];
    int numOfX,numOfO;
    int result = -1;
    int ret = -1;
    int *a = &result;
    printf("%p\n",&result);
    for(int i = 0;i < SIZE;i++)
    {
        for(int j = 0;j < SIZE;j++)
        {
            printf("当前列下标是%d,行下标是%d,请输入数字：",i,j);
            scanf("%d",&board[i][j]);
        }
    }
    for(int i = 0;i < SIZE && result == -1;i++) //检查行
    {
        numOfO = 0;
        numOfX = 0;
        for(int j = 0;j < SIZE;j++)
        {
            if(board[i][j] == 1)
            {
                numOfX++;
            }
            else
            {
                numOfO++;
            }
        }
        if(numOfO == SIZE)
        {
            result = 0;
            ret = 0;
        }
        else if(numOfX == SIZE)
        {
            result = 1;
            ret = 0;
        }
    }
    for(int j = 0;j < SIZE && result == -1;j++) //检查列
    {
        numOfO = 0;
        numOfX = 0;
        for(int i = 0;i < SIZE;i++)
        {
            if(board[i][j] == 1)
            {
                numOfX++;
            }
            else
            {
                numOfO++;
            }
        }
        if(numOfO == SIZE)
        {
            result = 0;
            ret = 1;
        }
        else if(numOfX == SIZE)
        {
            result = 1;
            ret = 1;
        }
    }
    numOfO = 0;
    numOfX = 0;
    for(int i = 0;i < SIZE && result == -1;i++) //检查正斜
    {
        if(board[i][i] == 1)
        {
            numOfX++;
        }
        else
        {
            numOfO++;
        }
        if(numOfO == SIZE)
        {
            result = 0;
            ret = 2;
        }
        else if(numOfX == SIZE)
        {
            result = 1;
            ret = 2;
        }
    }
    numOfO = 0;
    numOfX = 0;
    for(int i = 0;i < SIZE && result == -1;i++) //检查反斜
    {
        if(board[i][SIZE - i - 1] == 1)
        {
            numOfX++;
        }
        else
        {
            numOfO++;
        }
        if(numOfO == SIZE)
        {
            result = 0;
            ret = 3;
        }
        else if(numOfX == SIZE)
        {
            result = 1;
            ret = 3;
        }
    }
    switch(result)
    {
        case 1:
            printf("X赢了\n");
            break;
        case 0:
            printf("O赢了\n");
            break;
        default:
            printf("都没赢\n");
    }
    switch(ret)
    {
        case 0:
            printf("它是通过连成行赢的\n");
            break;
        case 1:
            printf("它是通过连成列赢的\n");
            break;
        case 2:
            printf("它是通过连成正斜赢的\n");
            break;
        case 3:
            printf("它是通过连成反斜赢的\n");
            break;
    }
    return 0;
}


// #include <stdio.h>

// int main()
// {
//     const int SIZE = 3;
//     int ret = -1;   // -1没人赢，1 O胜 0 X胜
//     int O = 0,X = 0;
//     int board[SIZE][SIZE] =
//     {
//         {1,0,1},
//         {0,1,0},
//         {1,1,0},
//     };
//     for(int i = 0;i <SIZE;i++)
//     {
//         for(int j = 0;j < SIZE;j++)
//         {
//             if(board[i][j])
//             {
//                 O++;
//             }
//             else
//             {
//                 X++;
//             }
//         }
//         if(O == SIZE)
//         {
//             ret = 1;
//         }
//         else if(X == SIZE)
//         {
//             ret = 0;
//         }
//         else
//         {
//             O = 0;
//             X = 0;
//         }
//     }
//     if(ret != -1)
//     {
//         goto end;
//     }
//     for(int j = 0;j < SIZE;j++)
//     {
//         for(int i = 0;i < SIZE;i++)
//         {
//             if(board[i][j])
//             {
//                 O++;
//             }
//             else
//             {
//                 X++;
//             }
//         }
//         if(O == SIZE)
//         {
//             ret = 1;
//         }
//         else if(X == SIZE)
//         {
//             ret = 0;
//         }
//         else
//         {
//             O = 0;
//             X = 0;
//         }
//     }
//     if(ret != -1)
//     {
//         goto end;
//     }
//     for(int i = 0;i < SIZE;i++)
//     {
//         for(int j = 0;j <= i;j++)
//         {
//             if(board[i][j])
//             {
//                 O++;
//             }
//             else
//             {
//                 X++;
//             }
//         }
//         if(O == SIZE)
//         {
//             ret = 1;
//         }
//         else if(X == SIZE)
//         {
//             ret = 0;
//         }
//         else
//         {
//             O = 0;
//             X = 0;
//         }
//     }
//     if(ret != -1)
//     {
//         goto end;
//     }
//     for(int i = 3;i < SIZE;i--)
//     {
//         for(int j = 3;j <= i;j--)
//         {
//             if(board[i][j])
//             {
//                 O++;
//             }
//             else
//             {
//                 X++;
//             }
//         }
//         if(O == SIZE)
//         {
//             ret = 1;
//         }
//         else if(X == SIZE)
//         {
//             ret = 0;
//         }
//     }
// end:
//     switch(ret)
//     {
//         case 1:
//             printf("O 赢了\n");
//             break;
//         case 0:
//             printf("X 赢了\n");
//             break;
//         default:
//             printf("都没赢\n");
//     }
//     return 0;
// }