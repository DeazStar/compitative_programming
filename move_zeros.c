void swap(int *x, int *y)
{
    int tmp;

    tmp = *x;
    *x = *y;
    *y = tmp;
}

void moveZeroes(int* nums, int numsSize){
    int left_pointer = 0;

    for (int i = 0;  i < numsSize; i++)
    {
        if (nums[i] != 0){
            swap(&nums[left_pointer], &nums[i]);
            left_pointer++;
        }
    }

    
}
