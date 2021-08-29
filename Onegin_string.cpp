#include <stdio.h>
#include  <ctype.h>
#include <string.h>

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

    while (*s != '\0') {

        length++;
        s++;
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

char *fgets_onegin (char *s, int size, FILE *stream)  //надо будет доделать...
{
    size--;
    for (size; size > 0; size--) {
        char smb = getc (stream);
        if ((smb == '\n') || (smb == EOF)) {
            *s = '\0';
            break;
        }

        *s = smb;
        ++s;

    }
    if (*s != '\0')
        return NULL;
                 //
    return s;    //
}

int main ()
{
    char str2[100] = "meat and dough";
    char str[100] = "fridge";

    //printf ("%p\n", strchr_onegin (str, 's'));
    //printf ("%d\n", strlen_onegin (str));

    //strncpy_onegin (str2, str, 9);
    //puts_onegin (str2);
    char s[100] = "";
    fgets_onegin (s, 5, stdin);
    puts(s);
    //puts_onegin (str);
    //puts_onegin (str2);
    return 0;
}
