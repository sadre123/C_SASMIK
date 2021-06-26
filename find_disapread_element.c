/*
 * Find All Numbers Disappeared in an Array
 *
 *
 * Given an array nums of n integers where nums[i] is in the range [1, n], return
 * an array of all the integers in the range [1, n] that do not appear in nums.
 *
 * Input: nums = [4,3,2,7,8,2,3,1]
 * Output: [5,6]
 *
 * Input: nums = [1,1]
 * Output: [2]
 *
 */


#include <stdio.h>
#include <stdlib.h>


int *findDisappearedNumbers(int* nums, int numsSize, int* returnSize) {

        int i, min = 0, max = 0, k =0, j = 0, notfound_cnt = 0;

        static int *ptr;

        ptr = malloc(numsSize * sizeof(int));


        min = 1;
        max = numsSize;

        for (i = min; i <= max; i++) {
                //search in nums[i]

                for (j = 0; j < numsSize; j++) {
                        if (nums[j] == i) {
                                break;
                        } else {
                                notfound_cnt++;
                        }
                }

                if (j == numsSize && notfound_cnt > 0) {
                        ptr[k++] = i;
                        notfound_cnt = 0;
                }
        }

        if (min == max) {
                ptr[k++] = ++min;
        }

        *returnSize = k;

        return ptr;
}


int main() {

        int arr[20] = {0};
        int n = 0, i, retSize = 0;
        int *ptr = NULL;

        printf("Enter the total number of elemnts in array:");
        scanf("%d",&n);

        printf("Enter elements in array\n");
        for (i = 0; i < n; i++) {
                scanf("%d", &arr[i]);
        }

        printf("Entered elements of array are\n");
        for (i = 0; i < n; i++) {
                printf("%d ", arr[i]);
        }

        printf("\n");


        ptr = findDisappearedNumbers(arr, n , &retSize);

        for (i = 0; i < retSize; i++) {

                printf("%d ",ptr[i]);
        }

        printf("\n");

        return 0;
}
