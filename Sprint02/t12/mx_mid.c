int mx_mid(int a, int b, int c);

int mx_mid(int a, int b, int c){
    int out = 0;
    if((a >= b && a <= c) || (a <= b && a >= c)){
        out = a;
    } else if ((b >= a && b <= c) || (b <= a && b >= c)) {
        out = b;
    } else if ((c >= a && c <= b) || (c <= a && c >= b)) {
        out = c;
    }
    return out;
}
