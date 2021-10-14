int mx_max(int a, int b, int c);

int mx_max(int a, int b, int c){
    int out = 0;
    if(a >= b && a >= c){
        out = a;
    } else if (b >= a && b >= c) {
        out = b;
    } else if (c >= a && c >= b) {
        out = c;
    }
    return out;
}
