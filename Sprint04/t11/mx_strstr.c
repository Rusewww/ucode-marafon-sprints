int mx_strlen(const char *s); //Length of the string
char *mx_strchr(const char *s, int c); //Searching the symbol
int mx_strncmp(const char *s1, const char *s2, int n); //Compare two strings
char *mx_strstr(const char*s1, const char*s2);


char *mx_strstr(const char *s1, const char *s2) {
    for(int i = 0; s1[i] != '\0'; i++) {
        int temp = i;
        int j = 0;
        while(s1[i++] == s2[j++]) {
            if(s2[j] == '\0') {
                return (char *)&s1[temp];
            }
        }
        i = temp;
    }
    return 0;
}
