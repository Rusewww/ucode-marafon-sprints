#include "hex_to_nbr.h"
#include <stdio.h>
unsigned long mx_hex_to_nbr(const char *hex){
    if(hex == NULL){
        return (unsigned long) NULL;
    }
    int i, k;
    unsigned int s = 0;
    for (i = 0; hex[i] != '\0'; i++) {
        char c = 0;
        if(mx_islower(hex[i])){
            c =(char)(hex[i] - 32);
        } else if (mx_isdigit(hex[i] + 48)){
            c =(char)(hex[i] + 48);
        } else {
            c =(char)(hex[i]);
        }
        switch (c) {
            case 'A':
            case 'B':
            case 'C':
            case 'D':
            case 'E':
            case 'F':
                k = c - 'A' + 10;
                break;
            case '1':
            case '2':
            case '3':
            case '4':
            case '5':
            case '6':
            case '7':
            case '8':
            case '9':
            case '0':
                k = c - '0';
                break;
        }
        s = (s << 4) + k;
    }
    return s;
}
