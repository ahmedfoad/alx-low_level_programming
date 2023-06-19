#include "main.h"
/**
 * _strcpy - copies the string pointed to by src, including the terminating null byte, 
 * to the buffer pointed to by dest
 * @dest: pointer to the destination buffer
 * @src: string to be copied
 *
 * Return: pointer to the destination buffer
 */
char *_strcpy(char *dest, char *src)
{
    char *ptr = dest;

    if (dest == NULL || src == NULL)
        return (NULL);

    while (*src)
    {
        *dest = *src;
        dest++;
        src++;
    }

    *dest = '\0';

    return (ptr);
}

