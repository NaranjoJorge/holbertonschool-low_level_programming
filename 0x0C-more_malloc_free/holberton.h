#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

/*
 * Structs, enums and unions definitions
 * Typedefs
 * Function prototypes
 */
int _putchar(char c);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
int *array_range(int min, int max);
void *_calloc(unsigned int nmemb, unsigned int size);
char *_memset(char *s, char b, unsigned int n);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *malloc_checked(unsigned int b);

#endif /* _HOLBERTON_H_ */
