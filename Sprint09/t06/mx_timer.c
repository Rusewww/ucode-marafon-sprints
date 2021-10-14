#include <time.h>

double mx_timer(void(*f)()){
    clock_t begin = clock();
    f();
    clock_t end = clock();
    if (begin < 0 || end < 0){
        return -1;
    } else {
        return (double)((end - begin) / CLOCKS_PER_SEC);
    }
}
