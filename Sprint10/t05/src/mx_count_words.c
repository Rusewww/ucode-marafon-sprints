#include "../inc/lib.h"

int mx_count_words(const char *str, char delimiter){
    int out = 1;
    int j = 0;
    int i = 0;
    if(str[0] == delimiter || str[0] <= 32){
        while(str[j] == delimiter || str[j] <= 32) {
            i++;
            j++;
        }
    }
    while(str[i]){
        if(str[i] == delimiter && str[i+1] != delimiter){
            if(str[i] == delimiter && str[i+1] >= 32){
                out++;
            }
        }
        i++;
    }
    return out;
}
