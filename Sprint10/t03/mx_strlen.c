#include "file_to_str.h"

int mx_strlen(const char *s){
    int lenth = 0;
    while (s[lenth]) {
        lenth++;
    }
    return lenth;
}
