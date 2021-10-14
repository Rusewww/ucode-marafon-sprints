#include <stdbool.h>

bool mx_isdigit(int c);
bool mx_isspace(char lsc);
int mx_atoi(const char *str);
void mx_printchar(char c);
void mx_printint(int n);

int main(int argc, char *argv[]) {
    if (argc == 1) {
        return 0;
    }
    int sum = 0;
    for (int i = 1; i < argc; i++) {
        int buff = 0;
        int minus = 1;
        bool compliter = true;
        for (int j = 0; argv[i][j] != '\0'; j++) {
            if (argv[i][j] == '-' && j == 0) {
                minus = -1;
                j++;
            }
            if (argv[i][j] == '+' && j == 0) {
                minus = 1;
                j++;
            }
            if (mx_isdigit(argv[i][j]) == false) {
                compliter = false;
                break;
            }
            buff = j;
        }
        if (compliter) {
            sum += (mx_atoi(&argv[i][buff]) * minus);
        }
    }
    mx_printint(sum);
    return 0;
}
