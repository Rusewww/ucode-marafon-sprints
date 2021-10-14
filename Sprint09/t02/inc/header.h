#ifndef IZOZULIA_HEADER_H
#define IZOZULIA_HEADER_H

    #include <stdbool.h>
    #include <unistd.h>

    void mx_printchar(char c);
    void mx_printint(int n);
    void mx_printstr(const char *s);
    bool mx_isdigit(char c);
    bool mx_isspace(char c);
    int mx_strlen(const char *s);
    int mx_strcmp (const char *s1, const char *s2);
    int mx_atoi(const char* str);
    char* mx_strcpy(char* dst, const char* src);

#endif
