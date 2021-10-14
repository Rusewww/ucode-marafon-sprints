#include <stdbool.h>

bool mx_is_odd(int value);

bool mx_is_odd(int value) {
    bool out = true;
    if ((value % 2) == 0) {
        out = true;
    } else {
        out = false;
    }
    return out;
}
