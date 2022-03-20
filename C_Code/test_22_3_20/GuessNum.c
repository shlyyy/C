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
        printf("������µ�����>:");
        scanf("%d", &input);
        if (input > random_num)
        {
            printf("�´���\n");
        }
        else if (input < random_num)
        {
            printf("��С��\n");
        }
        else
        {
            printf("��ϲ�㣬�¶���\n\n");
            break;
        }
    }
}

/*
��������Ϸ
*/
void GuessNum()
{
    int input = 0;
    srand((unsigned int)time(NULL));

    do 
    {
        Menu();
        printf("��ѡ��>:");
        scanf("%d", &input);

        switch (input)
        {
        case 1:
            Play();
            break;
        case 0:
            break;
        default:
            printf("ѡ��������������룡\n");
            break;
        }
    } while (input);

}