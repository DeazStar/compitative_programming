void printarr(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    
    printf("\n");
}
void insertionSort1(int n, int arr_count, int* arr) {
    int i, j, key;
    bool swaped = false;
    
    for (int i = n - 1; i >= 0; i--)
    {
        key = arr[i];
        j = i - 1;
        
        while(j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            swaped = true;
            printarr(arr, n);
            j--;
        }
        
        if (swaped)
        {
            arr[j + 1] = key;
            printarr(arr, n);
        }
        
        swaped = false;
    }
}
