/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* productExceptSelf(int* nums, int numsSize, int* returnSize){
    int *answer = (int*)malloc(numsSize * sizeof(int));
    int i, left_product = 1, right_product = 1;
    *returnSize = numsSize;

    // Calculate product of all elements to the left of each element
    for (i = 0; i < numsSize; i++) {
        answer[i] = left_product;
        left_product *= nums[i];
    }

    // Calculate product of all elements to the right of each element
    for (i = numsSize - 1; i >= 0; i--) {
        answer[i] *= right_product;
        right_product *= nums[i];
    }

    return answer;
}
