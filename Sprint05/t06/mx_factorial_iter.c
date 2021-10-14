int mx_factorial_iter(int n);

int mx_factorial_iter(int n){
    long clone = n;
    if (clone >= 2147483646 || clone < 0){
        return 0;
    }
    for (int i = n; i > 1; i--) {
        res *= i;
    }
}
