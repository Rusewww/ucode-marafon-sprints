#include "hex_to_nbr.h"

bool mx_isdigit(int c) {
    bool out = false;
    if (c >= 48 && c <= 57){
        out = true;
    } else {
        out = false;
    }
    return out;
}
