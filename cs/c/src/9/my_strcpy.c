#include <stdio.h>
#include <string.h>

char *my_strcpy(char *dst, char *src, int size)
{
    strncpy(dst, src, size);
    dst[size - 1] = '\0';
    return dst;
}