#include "../inc/lib.h"

char *mx_strncpy(char *dst, const char *src, int len){
    dst = (char *)src;
    int i = len;
    while(dst[i]){
        dst[i] = '\0';
        i++;
    }
    char* ret = (char *)&dst[0];
    return ret;
}
