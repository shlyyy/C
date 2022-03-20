#include "main.h"
#include <stdlib.h> // rand
#include <time.h> // time

void Menu()
{
    printf("*******************************\n");
    printf("**********  1.play  ***********\n");
    printf("**********  0.exit  ***********\n");
    printf("*******************************\n");
}

void Play()
{
    int random_num = rand() % 100 + 1;
    int input = 0;
    while (1)
    {
        printf("请输入猜的数字>:");
        scanf("%d", &input);
        if (input > random_num)
        {
            printf("猜大了\n");
        }
        else if (input < random_num)
        {
            printf("猜小了\n");
        }
        else
        {
            printf("恭喜你，猜对了\n\n");
            break;
        }
    }
}

/*
猜数字游戏
*/
void GuessNum()
{
    int input = 0;
    srand((unsigned int)time(NULL));

    do 
    {
        Menu();
        printf("请选择>:");
        scanf("%d", &input);

        switch (input)
        {
        case 1:
            Play();
            break;
        case 0:
            break;
        default:
            printf("选择错误，请重新输入！\n");
            break;
        }
    } while (input);

}