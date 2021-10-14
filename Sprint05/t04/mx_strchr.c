char *mx_strchr(const char *s, int c);

char *mx_strchr(const char *s, int c){
    int i = 0;
    while (s[i]){
        if (s[i] == c){
            char* ret = (char *)&s[i];
            return ret;
        }
        i++;
    }
    return 0;
}
