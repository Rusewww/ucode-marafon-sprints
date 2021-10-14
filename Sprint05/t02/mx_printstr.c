#include <unistd.h>

int mx_strlen(const char *s);
void mx_printstr(const char *s);

void mx_printstr(const char *s){
    int length = mx_strlen(s);
    int a = 0;
    while (a < length){
        write(1, &s[a], 1);
        a++;
    }
    char buff = '\n';
    write (1, &buff, 1);
    return;
}
