#include "game.h"


int main(int argc, char* argv[])
{
    int input = 0;

    do 
    {
        Menu();
        printf("��ѡ��>:");
        scanf("%d", &input);

        switch (input)
        {
        case 1:
            StartGame();
            break;
        case 0:
            printf("��Ϸ�˳�\n");
            break;
        default:
            printf("ѡ��������������룡\n");
            break;
        }

    } while (input);

    return 0;
}