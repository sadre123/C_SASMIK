/*
 * Given an array of integers arr, return true if and only if it is a valid mountain array.
 *
 * Recall that arr is a mountain array if and only if:
 *
 * arr.length >= 3
 * There exists some i with 0 < i < arr.length - 1 such that:
 * arr[0] < arr[1] < ... < arr[i - 1] < arr[i]
 * arr[i] > arr[i + 1] > ... > arr[arr.length - 1]
 *
 * Input: arr = [2,1]
 * Output: false
 *
 * Input: arr = [0,3,2,1]
 * Output: true
 *
 * Input: arr = [3,5,5]
 * Output: false
 *
 * arr = [0, 2, 3, 3, 5, 2, 1, 0]
 *
 * arr = [0, 2, 3, 4, 5, 2, 1, 0];
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


bool ValidMountainArray(int* arr, int arrSize) {

        int i, j;
        bool ret = false;

        if (arrSize < 3)
                return false;

        //find the first bigger element and break at the point
        for (i = 0; i < arrSize - 1; i++) {
                if (arr[i] < arr[i+1])
                        continue;
                else
                        break;
        }

        //handle all up & down array
        if (i == arrSize - 1 || i == 0)
                return false;


        for (j = i; j < arrSize - 1; j++) {
                if (arr[j] > arr[j+1])
                        continue;
                else
                        break;
        }

        if (j == arrSize - 1)
                ret = true;
        else
                ret = false;

        return ret;
}


int main() {


        int arr[20] = {0};
        int n = 0, i;

enter_n:
        printf("Enter the total number of elemnts in array:");
        scanf("%d",&n);

        if (n < 3) {
                printf("n should be minimum 3\n");
                goto enter_n;
        }

        printf("Enter elements in array\n");
        for (i = 0; i < n; i++) {
                scanf("%d", &arr[i]);
        }

        printf("Entered elements of array are\n");
        for (i = 0; i < n; i++) {
                printf("%d ", arr[i]);
        }

        printf("\n");

        if (ValidMountainArray(arr, n)) {
                printf("Given array is a Valid mountain array\n");
        } else {
                printf("Given array is not a valid mountain array\n");
        }

        return 0;
}
