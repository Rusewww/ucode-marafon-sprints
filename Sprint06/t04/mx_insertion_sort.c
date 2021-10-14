int mx_strlen(const char *s);

int mx_insertion_sort(char **arr, int size);

int mx_insertion_sort(char **arr, int size) {
    int operations = 0;
    for (int i = 0; i < size;) {
        int j = i;
        for (; j > 0 && mx_strlen(arr[j - 1]) > mx_strlen(arr[j]); j--) {
            char* tmp = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = tmp;
            operations += 1;
        }
        i = j + 1;
    }
    return operations;
}
