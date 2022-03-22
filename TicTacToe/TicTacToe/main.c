#include "game.h"


int main(int argc, char* argv[])
{
    int input = 0;

    do 
    {
        Menu();
        printf("请选择>:");
        scanf("%d", &input);

        switch (input)
        {
        case 1:
            StartGame();
            break;
        case 0:
            printf("游戏退出\n");
            break;
        default:
            printf("选择错误，请重新输入！\n");
            break;
        }

    } while (input);

    return 0;
}