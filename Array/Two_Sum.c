int* twoSum(int* nums, int numsSize, int target, int* returnSize) {

    // Allocate memory to store the result indices
    int* arr = (int*)malloc(2 * sizeof(int));

    // Check all possible pairs using two loops
    for (int i = 0; i < numsSize; i++)
    {
        for (int j = i + 1; j < numsSize; j++)
        {
            // If current pair sums to target, return indices
            if (nums[i] + nums[j] == target)
            {
                arr[0] = i;
                arr[1] = j;
                *returnSize = 2;
                return arr;
            }
        }
    }

    // Free memory if no solution is found
    free(arr);
    return NULL;
}
