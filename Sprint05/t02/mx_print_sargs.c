void mx_printchar(char c);
int mx_strlen(const char *s);
void mx_printstr(const char *s);
int mx_strncmp(const char *s1, const char *s2, int n);

int main(int argc, char *argv[]) {
    if(argc == 1){
        return 0;
    }
    for(int i = 1; i < argc; i++) {
        for(int j = 1; j < argc - 1; j++){
            if(mx_strncmp(argv[j], argv[j + 1], mx_strlen(argv[j])) > 0) {
                char *tmp = argv[j];
                argv[j] = argv[j+1] ;
                argv[j+1] = tmp;
            }
        }
    }
    for (int i = 1; i < argc; i++) {
        mx_printstr(argv[i]);
    }
    return 0;
}
