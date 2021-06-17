/*
 * square even position of array
 * do in-palce oepration to save extra space.
 */

#include <stdio.h>
#include <stdlib.h>


void SquareEvenPositinElement(int *arr, int n) {

        int i;

        for (i = 0; i < n; i++) {

                if (i % 2 == 0) {
                        arr[i] = arr[i] * arr[i];
                }
        }

        //print the array

        for (i = 0; i < n; i++) {
                printf("%d ", arr[i]);
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

        SquareEvenPositinElement(arr, n);

        return 0;
}
