int mx_gcd(int a, int b);

int mx_gcd(int a, int b) {
    if (a == 0) {
        if (b < 0) {
            return -b;
        } else {
            return b;
        }
    } else {
        return mx_gcd(b % a, a);
    }
}
