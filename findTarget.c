#include <stdbool.h>
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
void swap(int *x, int *y)
{
    int tmp;
    
    tmp = *x;
    *x = *y;
    *y = tmp;
}
int* targetIndices(int* nums, int numsSize, int target, int* returnSize){
    int *new_array;
    int i, j;
    bool sorted;
    int numtimes = 0;
    
    for (i = 0; i < numsSize; i++)
    {
        if (nums[i] == target)
        {
            numtimes++;
        }
    }
    
    new_array = malloc(sizeof(int) * numtimes);
    *returnSize = numtimes;
    do
    {
        sorted = false;
        for (i = 0; i < numsSize - 1; i++)
        {
            if (nums[i] > nums[i + 1])
            {
                swap(&nums[i], &nums[i + 1]);
                sorted = true;
            }
        }
    }while(sorted);
    
    i = 0;
    for (j = 0; j < numsSize; j++)
    {
       if (nums[j] == target)
       {
           new_array[i] = j;
           i++;
       }
    }
    
    return new_array;

}
