#include "file_to_str.h"

char *mx_strdup(const char *str) {
    char *out = mx_strnew(mx_strlen(str));
    mx_strcpy(out, str);
    return out;
}
