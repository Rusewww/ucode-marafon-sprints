void mx_isos_triangle(unsigned int length, char c);
void mx_printchar(char c);

void mx_isos_triangle(unsigned int length, char c){
    unsigned int i = 1;
    while(i <= length){
        for(unsigned int j =  0; j < i; j++){
            mx_printchar(c);
        }
        char buff = '\n';
        mx_printchar(buff);
        i++;
    }
    return;
}
