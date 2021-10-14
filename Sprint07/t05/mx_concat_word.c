#include <stdlib.h>

void mx_strdel(char **str);
char *mx_strjoin(char const *s1, char const *s2);
char *mx_strnew(const int size);
char *mx_strdup(const char *str);
char *mx_strcpy(char *dst, const char *src);
char *mx_strcat(char *s1, const char *s2);
int mx_strlen(const char *s);

char *mx_concat_words(char **words);

char *mx_concat_words(char **words){
    if(words == NULL){
        return NULL;
    }
    int i = 1;
    char *out = mx_strdup(words[0]);
    while(words[i] != NULL){
        char *buff = mx_strjoin(out, " ");
        out = mx_strjoin(buff, words[i]);
        i++;
        mx_strdel(&buff);
    }
    return out;
}
