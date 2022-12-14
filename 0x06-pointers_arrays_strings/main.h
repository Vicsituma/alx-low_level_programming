#ifndef MAIN_H
#define MAIN_H
/**
 * main.h -prototypes
 * Desc: header file containing prototypes for all functions
 * used in 0x06-pointers_arrays_strings
*/
#include <stdio.h>

int _putchar(char c);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
void reverse_array(int *a, int n);
char *string_toupper(char *);
char *cap_string(char *);
void pri(void);


#endif
