#include <stdio.h>
#include <stdlib.h>

int mx_count_words(const char *, char);
void mx_strdel(char **);
char *mx_strncpy(char *, const char *, int);
char *mx_strnew(const int);

char **mx_strsplit(char const *s, char c);

char **mx_strsplit(char const *s, char c) {
    if(s == NULL){
        return NULL;
    }
    int size = mx_count_words(s, c);
    char **out = (char **)malloc(8 * (size + 1));
    int count;
    int j = 0;
    for(int i = 0; i < size; i++) {
        count = 0;
        while (s[j] == c) {
            j++;
        }
        while (s[j] != c) {
            j++;
            count++;
        }
        out[i] = mx_strnew(count);
        j -= count;
        int k = 0;
        while(k < count) {
            out[i][k++] = s[j++];
        }
    }
    out[size] = NULL;
    return out;
}
