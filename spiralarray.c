/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* spiralOrder(int** matrix, int matrixSize, int* matrixColSize, int* returnSize){
    if(matrixSize == 0) return NULL;

    int left = 0, right = matrixColSize[0] - 1, top = 0, bottom = matrixSize - 1;
    int *result = (int*)malloc(sizeof(int) * matrixSize * matrixColSize[0]);
    *returnSize = matrixSize * matrixColSize[0];

    int k = 0;
    while(left <= right && top <= bottom){
        for(int i = left; i <= right; i++)
            result[k++] = matrix[top][i];
        top++;

        for(int i = top; i <= bottom; i++)
            result[k++] = matrix[i][right];
        right--;

        if(top <= bottom){
            for(int i = right; i >= left; i--)
                result[k++] = matrix[bottom][i];
            bottom--;
        }

        if(left <= right){
            for(int i = bottom; i >= top; i--)
                result[k++] = matrix[i][left];
            left++;
        }
    }

    return result;
}
