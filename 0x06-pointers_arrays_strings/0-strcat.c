#include "main.h"
/**
 * _strcat - Functions that concatenates two strings.
 * @dest: param pointer to a char
 * @src: param pointer to a char
 * Return: return value of dest
 */
char *_strcat(char *dest, char *src)
{
int i, j;
i = 0;
j = 0;
while (*(dest + i) != '\0')
{
i++;
j++;
}
i = 0;
while (*(src + i) != '\0')
{
dest[j] = src[i];
i++;
j++;
}
dest[j] = '\0';
return (dest);
}
