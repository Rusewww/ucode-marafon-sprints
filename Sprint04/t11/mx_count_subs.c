int mx_strlen(const char *s); //Length of the string
char *mx_strchr(const char *s, int c); //Searching the symbol
int mx_strncmp(const char *s1, const char *s2, int n); //Compare two strings
char *mx_strstr(const char*s1, const char*s2);
int mx_count_substr(const char *str, const char *sub);


int mx_count_substr(const char *str, const char *sub) {
    int count = 0;
    int length = mx_strlen(str);
    for (int i = 0; i < length; i++) {
        str = mx_strstr(str, sub);
        if (str != 0) {
            count++;
            str++;
        } else {
            break;
        }
    }
    return count;
}
