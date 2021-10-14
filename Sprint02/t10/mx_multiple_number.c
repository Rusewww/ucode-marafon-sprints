#include <stdbool.h>

bool mx_multiple_number(int n, int mult);

bool mx_multiple_number(int n, int mult){
    bool out = true;
    if((mult % n) == 0){
        out = true;
    }  else {
        out = false;
    }
    return out;
}
