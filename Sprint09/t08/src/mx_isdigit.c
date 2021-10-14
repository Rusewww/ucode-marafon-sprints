#include"minilibmx.h"

bool mx_isdigit(char c) {
    bool out = false;
    if (c >= 48 && c <= 57){
        out = true;
    } else {
        out = false;
    }
    return out;
}
