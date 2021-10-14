#include "stdbool.h"

bool mx_isdigit(int c);
bool mx_isspace(char c);
void mx_printchar(char c);
void mx_printint(int n);
int mx_atoi(const char *str);

int main(int argc, char *argv[]) {
    if (argc == 1) {
        return 0;
    }
    int i = 1;
    while (i < argc) {
        int num = mx_atoi(argv[i]);
        for (int j = 31; j >= 0; j--) {
            mx_printint((num >> j) & 1);
        }
        mx_printchar('\n');
        i++;
    }
    return 0;
}
