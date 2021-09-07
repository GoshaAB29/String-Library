#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int puts_onegin (const char *s);

char *strchr_onegin (const char *s, int c);

size_t strlen_onegin (const char *s);

char *strcpy_onegin (char *dst, const char *src);

char *strncpy_onegin (char *dst, const char *src, size_t len);

char *strcat_onegin (char *dst, const char *src );

char *strncat_onegin (char *dst, const char *src, size_t len);

char *fgets_onegin (char *s, int size, FILE *stream);

char *strdup_onegin (const char *s);

int getline_onegin (char *line, int max);
