#include <stdio.h>
#include <string.h>

/*
sizeof�ؼ��ּ��������ռ�ռ�Ĵ�С��strlen�����ַ����ĳ��ȣ�����'\0'������
*/
int main()
{
    char ary1[] = "abcdef";
    char ary2[] = { 'a', 'b', 'c' };
    printf("%d\n", strlen(ary1)); // 6
    printf("%d\n", sizeof(ary1)); // 7

    printf("%d\n", strlen(ary2)); // 18 �������
    printf("%d\n", sizeof(ary2)); // 3

    return 0;
}