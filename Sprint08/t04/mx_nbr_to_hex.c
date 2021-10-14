#include "get_address.h"

char *mx_nbr_to_hex(unsigned long nbr){
    unsigned long clone = nbr;
    int length = 1;
    while(clone > 16){
        clone /= 16;
        length++;
    }
    char *out = mx_strnew(length);
    while(nbr != 0){
        unsigned long buff = (nbr % 16);
        if (buff <= 9){
            out[--length] = (char)(buff + 48);
        } else {
            out[--length] = (char)(buff + 87);
        }
        nbr /= 16;
    }
    return out;;
}
