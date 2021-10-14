#include"minilibmx.h"

bool mx_isspace(char lsc);

bool mx_isspace(char lsc) {
    bool out = true;
    if (lsc == ' ' || lsc == '\t' || lsc == '\n' || lsc == '\v' || lsc == '\f' || lsc == '\r'){
        out = true;
    } else {
        out = false;
    }
    return out;
}
