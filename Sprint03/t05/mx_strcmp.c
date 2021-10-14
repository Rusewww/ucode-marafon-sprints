int mx_strcmp(const char *s1, const char *s2);

int mx_strcmp(const char *s1, const char *s2){
    int out;
    int i = 0;
    while(s1[i] != '\0' || s2[i] != '\0'){
        if (s1[i] != s2[i]){
            out = 0;
            break;
        }
        out = 1;
        i++;
    }
    return out;
}
