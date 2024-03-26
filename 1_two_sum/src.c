#include <stdio.h>
#include <stdlib.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int i, j;
    int* rs = (int*)malloc(*returnSize * sizeof(int));

    for (i = 0; i < numsSize; i++) {
        for (j = 0; j < numsSize; j++) {
            if (i == j) {
                continue;
            }
            if (nums[i] + nums[j] == target) {
                rs[0] = i;
                rs[1] = j;
                *returnSize = 2;
                return rs;
            }
        }
    }
    free(rs);
    *returnSize = 0;
    return NULL;
}

int main(void) {
    int nums[] = {2, 7, 11, 15};
    int target = 9;
    int return_size;

    int *rs = twoSum(nums, 4, target, &return_size);

    if (return_size > 0) {
        printf("Indices: %d, %d\n", rs[0], rs[1]);
        free(rs); // Free the allocated memory when done using it
    } else {
        printf("No solution found.\n");
    }

    return 0;
}
