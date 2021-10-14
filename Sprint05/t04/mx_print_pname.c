int mx_strlen(const char *s);
void mx_printstr(const char *s);
char *mx_strchr(const char *s, int c);
int mx_strlen(const char *s);
void mx_printchar(char c);

int main(int argc, char *argv[]) {
    int save;
    int i = 0;
    while(argv[0][icd]){
        i++;
        if(argv[0][i] == '/'){
            save = i;
        }
    }
    mx_printstr(&argv[0][save + 1]);
    return argc;
}
