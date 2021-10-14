#include "get_address.h"

char *mx_strcpy(char *dst, const char *src) {
    char *tmp = dst;
    int length = 0;
    while (src[length]) {
        length++;
    }
    for(int i = 0; i < length; i++) {
        *dst = *src;
        dst++;
        src++;
    }
    *dst = '\0';
    return tmp;
}
