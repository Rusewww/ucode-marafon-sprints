#include "hex_to_nbr.h"

bool mx_islower(int c) {
    bool out = true;
    if (c >= 97 && c <= 122){
        out = true;
    } else {
        out = false;
    }
    return out;
}
