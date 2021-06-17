/*
 * Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that
 * each unique element appears only once. The relative order of the elements should be kept the same.
 *
 * Input: nums = [1,1,2]
 * Output: 2, nums = [1,2,_]
 *
 * Input: nums = [0,0,1,1,1,2,2,3,3,4]
 * Output: 5, nums = [0,1,2,3,4,_,_,_,_,_]
 *
 */

#include <stdio.h>
#include <stdlib.h>

int RemoveAllDuplicates(int *arr, int n) {

        int i, k;

        for (i = 0; i < n-1;) {

                if (arr[i] == arr[i+1]) {

                        n--;

                        for (; i < n; i++) {

                                arr[i] = arr[i+1];
                        }
                        i = 0;
                } else {
                        i++;
                }
        }

        k = n;


        for (i = 0; i < k; i++) {

                printf("%d ",arr[i]);
        }
        printf("\n");

        return k;
}
int main() {

        int arr[20] = {0};
        int n = 0, i, ret = 0;

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

        ret = RemoveAllDuplicates(arr, n);

        printf("the final array lentgt is : %d\n",ret);

       return 0;
}
