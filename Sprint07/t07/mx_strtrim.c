#include <stdbool.h>
#include <stdio.h>

void mx_strdel(char **str);
bool mx_isspace(char c);
char *mx_strnew(const int size);
char *mx_strncpy(char *dst, const char *src, int len);
int mx_strlen(const char *s);

char *mx_strtrim(const char *str);

char *mx_strtrim(const char *str){
    if(str == NULL){
        return NULL;
    }
    int begin = 0;
    while(str[begin]){
        if(!mx_isspace(str[begin])) {
            break;
        }
        begin++;
    }
    int end = mx_strlen(str) - 1;
    while(str[end]){
        if(!mx_isspace(str[end])) {
            break;
        }
        end--;
    }
    char *buffer = mx_strnew(end - begin + 1);
    char *out = mx_strncpy(buffer,&str[begin],end + 1 - begin);

    mx_strdel(&buffer);
    return out;
}
