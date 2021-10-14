#include "hex_to_nbr.h"

bool mx_isupper(int c) {
    bool out = true;
    if (c >= 65 && c <= 90){
        out = true;
    } else {
        out = false;
    }
    return out;
}
