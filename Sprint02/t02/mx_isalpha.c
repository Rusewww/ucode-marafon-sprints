#include <stdbool.h>

bool mx_isalpha(int c);

bool mx_isalpha(int c){
    bool out = false;
    if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122)) {
        out = true;
    } else {
        out = false;
    }
    return out;
}
