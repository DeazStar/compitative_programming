 void swap(int *x, int *y)
 {
     int tmp = *x;
     *x = *y;
     *y = tmp;
 }

void countSwaps(int a_count, int* a) {
    int number_swap = 0;
    for (int i = 0; i < a_count; i++)
    {
        for (int j = 0; j < a_count - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                number_swap++;
                swap(&a[j], &a[j + 1]);
            }
        }
    }
    
    printf("Array is sorted in %d swaps.\n", number_swap);
    printf("First Element: %d\n", a[0]);
    printf("Last Element: %d\n", a[a_count-1]);
}
