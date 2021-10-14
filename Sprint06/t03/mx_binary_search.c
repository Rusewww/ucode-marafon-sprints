int mx_strcmp(const char *s1, const char *s2);
int mx_binary_search(char **arr, int size, const char *s, int *count);

int mx_binary_search(char **arr, int size, const char *s, int *count){
    int low, high, middle;
    low = 0;
    high = size - 1;
    while (low <= high) {
        middle = (low + high) / 2;
        if (mx_strcmp(arr[middle], s) > 0) {
            high = middle - 1;
            *count += 1;
        } else if (mx_strcmp(arr[middle], s) < 0) {
            low = middle + 1;
            *count += 1;
        } else {
            *count += 1;
            return middle;
        }
    }
    *count = 0;
    return -1;
}
