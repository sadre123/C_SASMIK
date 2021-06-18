/*
 * Given an array nums of non-negative integers, return an array consisting of all the even elements of nums, followed by all the odd elements of nums.
 *
 * You may return any answer array that satisfies this condition.
 *
 * Input: nums = [3,1,2,4]
 * Output: [2,4,3,1]
 * The outputs [4,2,3,1], [2,4,1,3], and [4,2,1,3] would also be accepted.
 *
 */



#include <stdio.h>
#include <stdlib.h>


int* sortArrayByParity(int* nums, int numsSize, int* returnSize) {

        int i, evenCnt = 0, j = 0, k = 0;
        static int *ptr;
        ptr = malloc(numsSize * sizeof(int));

        for (i = 0; i < numsSize; i++) {
                //find out all the even element
                if (nums[i] % 2 == 0)
                        evenCnt++;
        }

        for (i = 0; i < numsSize; i++) {
                //copy even element first.
                if (nums[i] % 2 == 0)
                        ptr[j++] = nums[i];

                if (j == evenCnt)
                        break;
        }

        k = evenCnt;
        //copy all odd element
        for (i = 0; i < numsSize; i++) {
                if (nums[i] & 0x1) {
                        ptr[j++] = nums[i];
                        k++;
                }
        }

        *returnSize = k;

        return ptr;
}


int main() {


        int arr[20] = {0};
        int n = 0, i;
        int *ptr, retSize = 0;

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
        ptr = sortArrayByParity(arr, n, &retSize);


        for (i = 0; i < retSize; i++) {

                printf("%d ",ptr[i]);
        }

        printf("\n");
  
      free(ptr);

        return 0;
}
