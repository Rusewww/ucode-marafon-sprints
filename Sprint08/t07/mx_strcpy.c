#include "create_new_agents.h"

char *mx_strcpy(char *dst, const char *src) {
    for(int i = 0; *src != '\0'; i++) {
        *dst = *src;
        dst++;
        src++;
    }
    *dst = '\0';
    return dst;
}
