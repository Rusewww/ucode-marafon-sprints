double mx_pow(double n, unsigned int pow);

double mx_pow(double n, unsigned int pow){
    double res = n;
    unsigned int i = 1;
    while(i < pow){
        res *= n;
        i++;
    }
    if (pow == 0){
        res = 1;
    }
    return res;
}
