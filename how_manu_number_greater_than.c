/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* smallerNumbersThanCurrent(int* nums, int numsSize, int* returnSize){
    int i,j,k;
    int *new_array = malloc(sizeof(int) * numsSize);
    *returnSize = numsSize;
    k = 0;
    
    for (i = 0; i < numsSize; i++)
    {
        k = 0;
        for (j = 0; j < numsSize; j++)
        {
            if (nums[i] > nums[j])
            {
                k++;
            }
        }
        
        new_array[i] = k;
    }
    
    return new_array;
}

