/*
 * File: 1-memcpy.c
 */

#include "main.h"

/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @dest: area copied to
 * @src: area copied
 * @n: number of bytes
 *
 * Return: a pointer to the memory area dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
        unsigned int i;

        for (i = 0; i < n; i++)
                dest[i] = src[i];
        return (dest);
)
