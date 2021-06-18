/*
 * Replace Elements with Greatest Element on Right Side
 *
 * Given an array arr, replace every element in that array with the greatest element among
 * the elements to its right, and replace the last element with -1.
 *
 * After doing so, return the array.
 *
 *
 * Input: arr = [17,18,5,4,6,1]
 * Output: [18,6,6,6,1,-1]
 *
 * Input: arr = [400]
 * Output: [-1]
 * Explanation: There are no elements to the right of index 0
 *
 * arr = [57010 40840 69871 14425 70605]
 *
 */

#include <stdio.h>
#include <stdlib.h>

int GetMax(int *arr, int arrSize) {

        int i, max = 0;

        max = arr[0];
        for (i = 0; i < arrSize; i++) {
                if (arr[i] > max)
                        max = arr[i];
        }

        return max;
}
int* replaceElements(int* arr, int arrSize, int* returnSize) {

        int i, j = 0;
        int *ptr = malloc(arrSize * sizeof(int));

        for (i = 0; i < arrSize - 1; i++) {

                ptr[j++] = GetMax(arr+i+1, arrSize - i - 1);
                (*returnSize)++;
        }

        printf("returnSize:%d\n",*returnSize);
        if (i == arrSize - 1) {
                ptr[i] = -1;
                (*returnSize)++;
        }

#if 0
        for (i = 0; i < *returnSize; i++) {
                printf("%d ",ptr[i]);
        }
        printf("\n");
#endif
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


        printf("Returened array.\n");
        ptr = replaceElements(arr, n, &retSize);

        for (i = 0; i < retSize; i++) {
                printf("%d ", ptr[i]);
        }
        printf("\n");

        return 0;
}
