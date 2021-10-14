#include <stdlib.h>

int *mx_copy_int_arr(const int *src, int size);

int *mx_copy_int_arr(const int *src, int size){
    if (src == NULL) {
        return NULL;
    } else {
        int *out = (int *)malloc(4 * size);
        for (int i = 0; i < size; i++){
            out[i] = src[i];
        }
        return out;
    }
}
