void mx_printint(int n);
void mx_printchar(char c);

void mx_printint(int n){
    int save[10];
    int length = 0;
    do{
        save[length] = n % 10;
        n = n / 10;
        length++;
    }while(n);
    length--;
    while (length != -1){
        mx_printchar(save[length] + 48);
        length--;
    }
    mx_printchar('\n');
    return;
}
