int mx_factorial_rec(int n);

int mx_factorial_rec(int n){
    long clone = n;
    if (clone >= 2147483646 || clone < 0){
        return 0;
    }
    return (n == 0) ? 1 : n * mx_factorial_rec(n - 1);
}
