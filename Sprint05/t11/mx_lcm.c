int mx_lcm(int a, int b);
int mx_gcd(int a, int b);

int mx_lcm(int a, int b){
    if (a == b || a == 0 || b == 0){
        return 0;
    }
    return ((a * b) / mx_gcd(a, b)) < 0 ? -((a * b) / mx_gcd(a, b)) : ((a * b) / mx_gcd(a, b));
}
