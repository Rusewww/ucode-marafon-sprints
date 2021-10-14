void mx_printchar(char c);

void mx_str_separate(const char *str, char delim);

void mx_str_separate(const char *str, char delim) {
    int i = 0;
    while(str[i]){
        if (str[i] == delim){
            while (str[i + 1] == delim){
                i++;
            }
            mx_printchar('\n');
        } else {
            mx_printchar(str[i]);
        }
        i++;
    }
    mx_printchar('\n');
}
