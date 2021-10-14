int mx_sqrt(int x);

int mx_sqrt(int x){
    int res = 0;
    int i = 0;
    while(i <= (x / 2)){
        if((i * i) == x){
            res = i;
            break;
        }
        i++;
    }
    return res;
}
