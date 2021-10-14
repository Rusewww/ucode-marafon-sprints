int mx_strcmp(const char *s1, const char *s2);
int mx_strlen(const char *s);

int mx_selection_sort(char **arr, int size);

int mx_selection_sort(char **arr, int size){
    int swap = 0;
    for (int i = 0; i < size - 1; i++) {
        int min = i;
        int j = i + 1;
        for (; j < size; j++) {
            if (mx_strlen(arr[j]) < mx_strlen(arr[min])) {
                min = j;
            } else if (mx_strlen(arr[j]) == mx_strlen(arr[min])) {
                if (mx_strcmp(arr[j], arr[min]) < 0)
                    min = j;
            }
        }
        if (min != i) {
            char *tmp = arr[i];
            arr[i] = arr[min];
            arr[min] = tmp;
            swap++;
        }
    }
    return swap;
}
