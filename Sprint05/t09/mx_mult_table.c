#include "stdbool.h"

void mx_printchar(char c);
void mx_printint(int n);
bool mx_isdigit(int c);
bool mx_isspace(char c);
int mx_strlen(const char *s);
int mx_atoi(const char *str);

int main(int argc, char *argv[]) {
    if ((argc != 3))  {
        return 0;
    }
    int saveOne = mx_atoi(argv[1]);
    int saveTwo = mx_atoi(argv[2]);
    if ((saveOne < 1) || (saveTwo < 1) || (saveOne > 9) || (saveTwo > 9))  {
        return 0;
    }
    if (saveOne > saveTwo) {
        int temp = saveOne;
        saveOne = saveTwo;
        saveTwo = temp;
    }
    for (int i = saveOne; i <= saveTwo; i++){
        for (int j = saveOne; j <= saveTwo; j++){
            mx_printint(i * j);
            if (j == saveTwo){
                mx_printchar('\n');
            } else {
                mx_printchar('\t');
            }
        }
    }
    return 0;
}
