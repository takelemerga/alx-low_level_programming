#ifndef MAIN_H
#define MAIN_H

void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
unsigned int my_strlen(char *p);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);

#endif
