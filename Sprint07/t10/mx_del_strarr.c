#include <stdlib.h>

void mx_strdel(char **str);

void mx_del_strarr(char ***arr);

void mx_del_strarr(char ***arr){
    int i = 0;
    while (**arr){
        free(arr[i++]);
    }
    free(**arr);
}
