#include "main.h"



/*
模拟实现库函数strlen
size_t strlen ( const char * str );
Get string length
Returns the length of the C string str.
*/
size_t my_strlen(const char* str)
{
	assert(str);
	int len = 0;
	while (*str)
	{
		len++;
		str++;
	}
	return len;
}
size_t my_strlen2(const char* str)
{
	const char* eos = str;
	while (*eos++);
	return(eos - str - 1);
}




/*
模拟实现库函数strcpy
char * strcpy ( char * destination, const char * source );
Copy string
Copies the C string pointed by source into the array pointed by destination, 
including the terminating null character (and stopping at that point).
*/
char* my_strcpy(char* destination, const char* source)
{
	char* ret = destination;
	assert(destination && source);
	while (*destination++ = *source++);
	return ret;
}