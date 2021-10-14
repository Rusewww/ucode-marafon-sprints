#include "file_to_str.h"

char *mx_strjoin(char const *s1, char const *s2);
char *mx_strnew(const int size);
int mx_strlen(const char *s);
char *mx_strdup(const char *str);
char *mx_strcpy(char *dst, const char *src);
char *mx_strcat(char *s1, const char *s2);

char *mx_strjoin(char const *s1, char const *s2){
    char *out;
    if(s1 == NULL && s2 == NULL){
        return NULL;
    } else if (s1 == NULL){
        out = mx_strdup(s2);
    } else if (s2 == NULL){
        out = mx_strdup(s1);
    } else {
        out = mx_strdup(s1);
        out = mx_strcat(out, s2);
    }
    return out;
}
