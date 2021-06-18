/*
 * Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.
 *
 * Note that you must do this in-place without making a copy of the array.
 *
 * Input: nums = [0,1,0,3,12]
 * Output: [1,3,12,0,0]
 *
 * Input: nums = [0]
 * Output: [0]
 *
 */


#include <stdio.h>
#include <stdlib.h>

void moveZeroes(int* nums, int numsSize) {

        int i, j = 0, NonZerocnt = 0;

        for (i = 0; i < numsSize; i++) {

                if (nums[i] != 0)
                        NonZerocnt++;
        }

        for (i = 0; i < numsSize; i++) {
                if (nums[i] != 0) {
                        nums[j++] = nums[i];
                }
                if (j == (NonZerocnt))
                        break;
        }

        for (; j < numsSize; j++) {

                nums[j] = 0;
        }


        for (i = 0; i < numsSize; i++) {

                printf("%d ",nums[i]);
        }
        printf("\n");

}


int main() {



        int arr[20] = {0};
        int n = 0, i;

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

        moveZeroes(arr, n);

        return 0;
}
