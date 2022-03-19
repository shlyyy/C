#include <stdio.h>
#include <string.h>

/*
sizeof关键字计算的是所占空间的大小。strlen计算字符串的长度，遇到'\0'结束。
*/
int main()
{
    char ary1[] = "abcdef";
    char ary2[] = { 'a', 'b', 'c' };
    printf("%d\n", strlen(ary1)); // 6
    printf("%d\n", sizeof(ary1)); // 7

    printf("%d\n", strlen(ary2)); // 18 随机数。
    printf("%d\n", sizeof(ary2)); // 3

    return 0;
}