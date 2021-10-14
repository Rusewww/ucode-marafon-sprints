#include "../inc/lib.h"

void mx_printstr(const char *s){
    int length = mx_strlen(s);
    int a = 0;
    while (a < length){
        write(1, &s[a], 1);
        a++;
    }
    return;
}
