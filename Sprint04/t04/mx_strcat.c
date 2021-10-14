char *mx_strcat(char *s1, const char *s2);
int mx_strlen(const char *s);

char *mx_strcat(char *s1, const char *s2){
    int length = mx_strlen(s1);
    int lengthTwo = mx_strlen(s2);
    for(int i = length; i < (length + lengthTwo); i++){
        s1[i] = s2[i - length];
    }
    char* ret = (char *)&s1[0];
    return ret;
}
