int mx_popular_int(const int *arr, int size);

int mx_popular_int(const int *arr, int size){
    int out = 0;
    int tmp = 0;
    for(int i = 0; i < size; i++){
        int count = 0;
        for(int j = i + 1; j < size; j++){
            if(arr[j] == arr[i])
                count++;
        }
        if(count > tmp){
            tmp = count;
            out = arr[i];
        }
    }
    return out;
}
