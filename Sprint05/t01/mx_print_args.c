int mx_strlen(const char *s);
void mx_printchar(char c);
void mx_printstr(const char *s);

int main(int argc, char *argv[]) {
    if (argc == 1){
        return 0;
    }
    int i = 1;
    while (i < argc){
        mx_printstr(argv[i]);
        i++;
    }
    return 0;
}
