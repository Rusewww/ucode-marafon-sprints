#ifndef IZOZULIA_MINILIBMX_H
#define IZOZULIA_MINILIBMX_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdbool.h>

void mx_printchar(char c);
void mx_printint(int n);
void mx_printstr(const char *s);
int mx_strlen(const char *s);
int mx_strcmp (const char *s1, const char *s2);
int mx_atoi(const char* str);
char* mx_strcpy(char* dst, const char* src);
bool mx_isdigit(char c);
bool mx_isspace(char c);

#endif
