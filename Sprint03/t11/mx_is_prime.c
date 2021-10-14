#include <stdbool.h>

bool mx_is_prime(int num);

bool mx_is_prime(int num){
    int dividers = 0;
    for(int i = 1; i <= num; i++){
        if((num % i) == 0) {
            dividers++;
            if (dividers > 2) {
                return false;
            }
        }
    }
    return true;
}
