#include "get_address.h"
#include <stdlib.h>

char *mx_get_address(void *p) {
    char *tmp = mx_nbr_to_hex((unsigned long)(p));
    char *res = mx_strnew(mx_strlen(tmp) + 2);
    res += 2;
    res = mx_strcpy(res, tmp);
    res -= 2;
    res[0] = '0';
    res[1] = 'x';
    free(tmp);
    return res;
}
