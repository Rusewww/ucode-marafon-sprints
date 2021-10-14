char *mx_strdup(const char *str);
char *mx_strcpy(char *dst, const char *src);
char *mx_strnew(const int size);
int mx_strlen(const char *s);

char *mx_strdup(const char *str) {
    char *out = mx_strnew(mx_strlen(str));
    mx_strcpy(out, str);
    return out;
}
