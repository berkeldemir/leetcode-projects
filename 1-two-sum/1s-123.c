 #include <stdlib.h>
 
int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
    *returnSize = 2;
    int *result;
    result = (int *)malloc(2 * sizeof(int));
    if (result == NULL)
    {
        *returnSize = 0;
        return NULL;
    }
    for (int i = 0; i < numsSize - 1; i++)
    {
        for (int j = i + 1; j < numsSize; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                result[0] = i;
                result[1] = j;
                return (result);
            }
        }
    }
    *returnSize = 0;
    free(result);
    return (NULL);
}