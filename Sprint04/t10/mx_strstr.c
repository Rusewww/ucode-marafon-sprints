int mx_strlen(const char *s); //Length of the string
char *mx_strchr(const char *s, int c); //Searching the symbol
int mx_strncmp(const char *s1, const char *s2, int n); //Compare two strings
char *mx_strstr(const char*s1, const char*s2);

char *mx_strstr(const char *s1, const char *s2){
    if(mx_strlen(s1) < mx_strlen(s2)){
        return 0;
    }
    while(*s1 != '\0'){
        if(mx_strncmp(s1, s2, mx_strlen(s2)) == 0){
            return mx_strchr(s1, *s2);
        }
        s1++;
    }
    return 0;
}
