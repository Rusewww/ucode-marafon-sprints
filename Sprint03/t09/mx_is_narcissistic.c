#include <stdbool.h>

bool mx_is_narcissistic(int num);
double mx_pow(double n, unsigned int pow);

bool mx_is_narcissistic(int num){
    bool res = false;
    if(num < 0){
        return false;
    }
    int count = 0;
    int cloneZero = num;
    while (cloneZero != 0){
        count++;
        cloneZero /= 10;
    }
    int narc = 0;
    int clone = num;
    while(clone != 0){
        narc += mx_pow((clone % 10), count);
        clone /= 10;
    }
    if (narc == num){
        res = true;
    }
    return res;
}
