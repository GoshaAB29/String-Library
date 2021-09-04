#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <iostream>

int puts_onegin (const char *s)
{
    if ((s == nullptr) || (*s == '\0'))
        return EOF;

    printf ("%s\n", s);

    return 0;
}

char *strchr_onegin (const char *s, int c)
{
    while (*s != '\0') {

        if (*s == c) {
            return (char*)s;
        }

        s++;
    }

    return NULL;
}

size_t strlen_onegin (const char *s)
{
    int length = 0;

    while ((*s != '\0') && (*s != '\n')) {
        s++;
        length++;
    }

    return length;
}

char *strcpy_onegin (char *dst, const char *src)
{
    *dst = *src;

    while (*src)
        *++dst = *++src;

    return dst;
}

char *strncpy_onegin (char *dst, const char *src, size_t len)
{
    int num_copied = 0;

    while ((*src) && (len > num_copied)) {

        ++num_copied;

        *dst = *src;

        ++dst;
        ++src;
    }

    if (len > num_copied) {
        while (*dst) {

            *dst = '\0';
            ++dst;
        }
    }

    return dst;
}

char *strcat_onegin (char *dst, const char *src )
{
    while (*dst) {
    ++dst;
    }

    while (*src) {
        *dst = *src;
        ++dst;
        ++src;
    }

    return dst;
}

char *strncat_onegin (char *dst, const char *src, size_t len)
{
    while (*dst)
        ++dst;

    int num_copied = 0;

    while ((*src) && (len > num_copied)) {

        ++num_copied;

        *dst = *src;

        ++dst;
        ++src;
    }

    return dst;
}

char *fgets_onegin (char *s, int size, FILE *stream)
{
    while (size != 1) {
        char smb = getc (stream);

        if (smb == '\n') {
            *s = '\n';
            s++;
            *s = '\0';
            return s;
        }

        if  (smb == EOF)
            return NULL;

        *s = smb;
        ++s;
        --size;
    }

    *s = '\0';

    return s;
}

char *strdup_onegin (const char *s)
{
    if (s == nullptr)
        return NULL;

    char *dup = (char*) malloc ((strlen_onegin (s) + 1) * sizeof(char));

    if (dup == nullptr)
        return NULL;

    strcpy_onegin (dup, s);

    return dup;
}

int getline_onegin (char *line, int max)
{
    if (fgets_onegin (line, max, stdin) == NULL)
        return 0;
    else
        return strlen_onegin (line);
}

int main ()
{
   // char str2[100] = "meat and dough";
   // char str[100] = "fridge";

   // printf ("%p\n", strchr_onegin (str, 's'));
   // printf ("%d\n", strlen_onegin (str));

   // strncpy_onegin (str2, str, 9);
   // puts_onegin (str2);
   // char s[100] = " ";
   // char* ukaz = (char*)s[100];
   // printf("%d",fgets_onegin (s, 2, stdin));
   // puts(s);
   //char *a = strdup_onegin (s);
   // puts (a);
   // free(a);
   // puts ("End!");
   // puts_onegin (str);
   // puts_onegin (str2);
   // size_t n = 3;
   // puts (s);
   // char line[15] = "FRKT";
   // int linecap = 10;
   // int linelen = 0;
   // linelen = getline_onegin ((char*)&line, linecap);
   // printf ("%d\n", linelen);
   // puts (line);
    return 0;
}
