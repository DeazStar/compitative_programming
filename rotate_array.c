void rotate(int* nums, int numsSize, int k){
    k = k % numsSize;
    if (k == 0) return;

    int i, j, tmp, previous, count = 0;
    for (i = 0; count < numsSize; i++) {
        previous = nums[i];
        j = i;
        do {
            j = (j + k) % numsSize;
            tmp = nums[j];
            nums[j] = previous;
            previous = tmp;
            count++;
        } while (i != j);
    }
}

