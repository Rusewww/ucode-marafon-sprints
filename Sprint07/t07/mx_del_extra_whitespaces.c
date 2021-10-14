#include <stdbool.h>
#include <stdlib.h>

void mx_strdel(char**);
int mx_strlen(const char *);
char *mx_strncpy(char*, const char*, int);
char *mx_strtrim(const char*);
char *mx_strnew(const int);
bool mx_isspace(int);

char *mx_del_extra_whitespaces(const char *str);

char *mx_del_extra_whitespaces(const char *str){
    if(str == NULL){
        return NULL;
    }
    int space = 0;
    int outSize = 0;
    int i = 0;
    while (i < mx_strlen(str)) {
        if (!mx_isspace(str[i])) {
            outSize += 1;
            space = 0;
        }
        if (mx_isspace(str[i]) && space == 0) {
            outSize += 1;
            space = 1;
        }
        i++;
    }
    char *out = mx_strnew(outSize + 1);
    int ind = 0;
    space = 0;
    i = 0;
    while(i < mx_strlen(str)) {
        if (!mx_isspace(str[i])) {
            out[ind] = str[i];
            ind += 1;
            space = 0;
        }
        if(mx_isspace(str[i]) && space == 0) {
            out[ind] = ' ';
            ind += 1;
            space = 1;
        }
        i++;
    }
    out = mx_strtrim(out);
    return out;
}
