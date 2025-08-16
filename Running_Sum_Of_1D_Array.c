//Running Sum of 1d Array (Easy Array)

#include <stdio.h>
#include <stdlib.h> // for malloc

int* runningSum(int* nums, int numsSize, int* returnSize) {
    // allocate memory for the result array
    int* result = (int*)malloc(numsSize * sizeof(int));

    // set the return size
    *returnSize = numsSize;

    // compute running sum
    result[0] = nums[0]; // first element same
    for (int i = 1; i < numsSize; i++) {
        result[i] = result[i - 1] + nums[i];
    }

    return result; // return pointer to result array
}

int main() {
    int nums[] = {1, 2, 3, 4};
    int size = 4;
    int returnSize;

    int* ans = runningSum(nums, size, &returnSize);

    printf("Running Sum: ");
    for (int i = 0; i < returnSize; i++) {
        printf("%d ", ans[i]);
    }

    free(ans); // important: free allocated memory
    return 0;
}
