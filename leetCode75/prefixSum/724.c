/*
 * author Prasad Mahabare
 * created on 02-07-2026-21h-46m
 * github: https://github.com/MahabarePS
 * copyright 2026
*/
/*
Given an array of integers nums, calculate the pivot index of this array.

The pivot index is the index where sum of all the numbers strictly to the left of the index
is equal to the sum of all the numbers strictly to the index's right.

If the index is on the left edge of the array, then the left sum is 0 because there are no
elements to the left. This also applies to the right edge of the array.

Return the leftmost pivot index. If no such index exists, return -1.

Example 1:

Input: nums = [1,7,3,6,5,6]
Output: 3
Explanation:
The pivot index is 3.
Left sum = nums[0] + nums[1] + nums[2] = 1 + 7 + 3 = 11
Right sum = nums[4] + nums[5] = 5 + 6 = 11
Example 2:

Input: nums = [1,2,3]
Output: -1
Explanation:
There is no index that satisfies the conditions in the problem statement.
Example 3:

Input: nums = [2,1,-1]
Output: 0
Explanation:
The pivot index is 0.
Left sum = 0 (no elements to the left of index 0)
Right sum = nums[1] + nums[2] = 1 + -1 = 0
 

Constraints:

1 <= nums.length <= 104
-1000 <= nums[i] <= 1000
*/
#include <stdio.h>
#include <stdlib.h>

int pivotIndex(int* nums,int numsSize){
    int total = 0;
    int leftSum = 0;

    // Step 1: Calculate total sum
    for (int i = 0; i < numsSize; i++)
    {
        total += nums[i];
    }

    // Step 2: Check every index as a possible pivot
    for (int i = 0; i < numsSize; i++)
    {
        int rightSum = total - leftSum - nums[i];

        if (leftSum == rightSum)
        {
            return i;
        }

        // Move nums[i] from the pivot position
        // into the left side for the next iteration
        leftSum += nums[i];
    }
    return -1;
}
int main(){                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         
    int nums[]={1,7,3,6,5,6};
    int numsSize = sizeof(nums)/sizeof(nums[0]);
    printf("Output:%d\n ",pivotIndex(nums,numsSize));
    return 0;
}