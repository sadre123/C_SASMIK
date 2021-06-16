/*
 * Given a fixed length array arr of integers, duplicate each occurrence of zero, shifting the remaining elements to the right.
 *
 * Note that elements beyond the length of the original array are not written.
 *
 * e.g :
 *
 * Input: [1,0,2,3,0,4,5,0]
 * Output: null
 * Explanation: After calling your function, the input array is modified to: [1,0,0,2,3,0,0,4]
 *
 */

#include <stdio.h>
#include <stdlib.h>

void DuplicateZeros(int *arr, int n) {

        int i, j;
#if 0
        for (i = 0; i < n;) {
                if (arr[i] == 0) {
                        //shift the array
                        for (j = n-1; j >= i; j--) {
                                arr[j+1] = arr[j];
                        }
                        arr[i+1] = 0;
                        i = i + 1;
                }
                i++;
        }
#endif
        
        //for in-place use the below logic
          for (i = 0; i < n;) {
                if (arr[i] == 0) {
                        //shift and overwrite the array
                        for (j = n-1; j >= i+1; j--) {
                                arr[j] = arr[j-1];
                        }
                        arr[i+1] = 0;
                        i = i + 1;
                }
                i++;
        }


        for (i = 0; i < n; i++) {
                printf("%d ", arr[i]);
        }
        printf("\n");
}

int main() {


        int arr[100] = {0};
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

        DuplicateZeros(arr, n);

        return 0;
}
