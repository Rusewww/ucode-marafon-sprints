int mx_sum_digits(int num);

int mx_sum_digits(int num){
    int out = 0;
    int divider = 10;
    while (num != 0){
        out = out +(num % 10);
        num = num / divider;
    }
    if(out < 0) {
        out *= -1;
    }
    return out;
}
