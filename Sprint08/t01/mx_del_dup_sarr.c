#include "duplicate.h"

t_intarr *mx_del_dup_sarr(t_intarr *src){
    if (src->arr == NULL) {
        return NULL;
    }
    t_intarr *out = (t_intarr*)malloc(16);
    int f = 0;
    for(int i = 0; i < src->size; i++) {
        for(int j = i + 1; j <= src->size; j++) {
            if(src->arr[i] == src->arr[j]) {
                for(int k = j; k <= src->size; k++) {
                    src->arr[k] = src->arr[k+1];
                }
                src->size = src->size - 1;
                j = j - 1;
                f = 1;
            }
        }
    }
    out->size = src->size;
    out->arr = mx_copy_int_arr(src->arr, out->size);
    return out;
}
