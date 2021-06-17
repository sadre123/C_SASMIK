/*
 *
 * Given an array arr of integers, check if there exists two integers N and M such that N is the double of M ( i.e. N = 2 * M).
 *
 * More formally check if there exists two indices i and j such that
 *
 * e.g
 * Input: arr = [10,2,5,3]
 * Output: true
 * Explanation: N = 10 is the double of M = 5,that is, 10 = 2 * 5.
 *
 * e.g
 * Input: arr = [3,1,7,11]
 * Output: false
 * Explanation: In this case does not exist N and M, such that N = 2 * M
 *
 * arr = [-10, 20, 1, 2]
 *
 * arr = [-2 0 10 -19 4 6 -8];
 *
 * arr = [0, 1, 3, 0];
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool checkIfExist(int* arr, int arrSize){

        int i, j;
        bool ret = false;

        for (i = 0; i < arrSize; i++) {

                for (j = 0; j < arrSize; j++) {

                        if (i == j)
                                continue;

                        if (arr[i] == (2 * arr[j])) {
                                ret = true;
                                break;
                        }
                }

                if (ret == true)
                        break;
        }

        return ret;
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

        if (checkIfExist(arr, n)) {
                printf("array element exist\n");
        } else {
                printf("Array element does not exist\n");
        }


        return 0;
}
