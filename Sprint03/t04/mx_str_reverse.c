void mx_str_reverse(char *s);
int mx_strlen(const char *s);
void mx_swap_char(char *s1, char *s2);

void mx_str_reverse(char *s) {
    int length = mx_strlen(s);
    int half = length / 2;
    int i = 0;
    while (i < half){
        mx_swap_char(&s[i], &s[length - 1 - i]);
        i++;
    }
}
