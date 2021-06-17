/*
 * You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, and two integers m and n,
 * representing the number of elements in nums1 and nums2 respectively.
 *
 * Merge nums1 and nums2 into a single array sorted in non-decreasing order.
 *
 * The final sorted array should not be returned by the function, but instead be stored inside the array nums1.
 * To accommodate this, nums1 has a length of m + n, where the first m elements denote the
 * elements that should be merged, and the last n elements are set to 0 and should be ignored. nums2 has a length of n.
 *
 * Input: nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
 * Output: [1,2,2,3,5,6]
 * Explanation: The arrays we are merging are [1,2,3] and [2,5,6].
 * The result of the merge is [1,2,2,3,5,6] with the underlined elements coming from nums1.
 *
 * Input: nums1 = [1], m = 1, nums2 = [], n = 0
 * Output: [1]
 * Explanation: The arrays we are merging are [1] and [].
 * The result of the merge is [1].
 */

#include <stdio.h>
#include <stdlib.h>

void SortArray(int *nums1, int nums1Size) {

        int i, j, temp = 0;


        for (i = 0; i < nums1Size; i++) {

                for (j = 0; j < nums1Size - i - 1; j++) {
                        if (nums1[j] > nums1[j+1]) {
                                //swap
                                temp = nums1[j];
                                nums1[j] = nums1[j+1];
                                nums1[j+1] = temp;
                        }
                }
        }
}
void MergeArray(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {

        int i, j;


        if (m == 0) {
                for (i = 0; i < n; i++) {
                        nums1[i] = nums2[i];
                }
                for (i = 0; i < nums1Size; i++) {

                printf("%d ",nums1[i]);
                }

                printf("\n");

                return;
        }


        /* copy all the elemnts of nums2 array to nums1 */
        for (i = 0; i < nums1Size; i++) {

                if (m == i + 1) {
                        i = 0;
                        // copy all the elemnt of nums2 into nums1
                        for (j = m; j < nums1Size; j++) {
                                nums1[j] = nums2[i++];
                        }
                        break;
                }
        }

        //sort the array in accending order

        SortArray(nums1, nums1Size);

        for (i = 0; i < nums1Size; i++) {

                printf("%d ",nums1[i]);
        }
        printf("\n");
}

int main() {

        int num1[20] = {0};
        int num2[20] = {0};
        int m = 0, n = 0, i, e1 = 0, e2 = 0;

        printf("Enter the total number of elemnts in array num1:");
        scanf("%d",&e1);

        printf("Enter elements in array\n");
        for (i = 0; i < e1; i++) {
                scanf("%d", &num1[i]);
        }

        printf("Entered elements of array num1 are\n");
        for (i = 0; i < e1; i++) {
                printf("%d ", num1[i]);
        }

        printf("\n");

        printf("Enter the total number of elemnts in array num2:");
        scanf("%d",&e2);

        printf("Enter elements in array\n");
        for (i = 0; i < e2; i++) {
                scanf("%d", &num2[i]);
        }

        printf("Entered elements of array num2 are\n");
        for (i = 0; i < e2; i++) {
                printf("%d ", num2[i]);
        }

        printf("\n");

        printf("Enter the merge length from num1 & num2 :");
        scanf("%d %d",&m, &n);

        MergeArray(num1, m+n, m, num2, e2, n);

        return 0;
}
