/*
 * Given a binary array nums, return the maximum number of consecutive 1's in the array.
 * Input: nums = [1,1,0,1,1,1]
 * Output: 3
 * Also count subset of 1s and 0s in the given array
 */

#include <stdio.h>
#include <stdlib.h>

int Print_Array(int *arr, int n) {
        int i;

        for (i = 0; i < n; i++) {

                printf("%d ", arr[i]);
        }
        printf("\n");
}

int GetTotalSubsetOfOnes(int *arr, int n) {

        int SubSetCount = 0, i , j;

        /* loop for entire array */
        for (i = 0; i < n; i++) {
                /* start subset finding only first 1s occur */
                if (arr[i] == 1) {
                        /* loop for subset of 1s */
                        for (j = i; j < n; j++) {
                                if (arr[j] == 1)
                                        continue;
                                else
                                        break;
                        }
                        /* start outer loop after all zeros */
                        i = j;
                        SubSetCount++;
                } else {
                        continue;
                }
        }

        return SubSetCount;
}
int GetTotalSubsetOfZeros(int *arr, int n) {

        int SubSetCount = 0, i , j;

        /* loop for entire array */
        for (i = 0; i < n; i++) {
                if (arr[i] == 0) {
                        /* loop for subset of 0s */
                        for (j = i; j < n; j++) {
                                if (arr[j] == 0)
                                        continue;
                                else
                                        break;
                        }
                        i = j;
                        SubSetCount++;
                } else {
                        continue;
                }
        }

        return SubSetCount;
}

int CountMaxOnesInAllSubSetOnes(int *arr, int n) {

        int i;
        int MaxConsecutiveOnes = 0, OnesCnt = 0, OnesCntOrgnl = 0;

        for (i = 0; i < n; i++) {

                if (arr[i] == 1) {
                        OnesCnt++;
                        OnesCntOrgnl = OnesCnt;
                } else {
                        if (OnesCnt > MaxConsecutiveOnes) {
                                MaxConsecutiveOnes = OnesCnt;
                                OnesCntOrgnl = MaxConsecutiveOnes;
                        }
                        OnesCnt = 0;
                }
        }
        if (OnesCntOrgnl > MaxConsecutiveOnes)
                MaxConsecutiveOnes = OnesCntOrgnl;

        return MaxConsecutiveOnes;
}

int CountMaxOnesInAllSubSetZeros(int *arr, int n) {

        int i;
        int MaxConsecutiveZero = 0, ZerosCnt = 0, ZeroCntOrgnl = 0;;

        for (i = 0; i < n; i++) {

                if (arr[i] == 0) {
                        ZerosCnt++;
                        ZeroCntOrgnl = ZerosCnt;
                } else {
                        if (ZerosCnt > MaxConsecutiveZero) {
                                MaxConsecutiveZero = ZerosCnt;
                                ZeroCntOrgnl = MaxConsecutiveZero;
                        }
                        ZerosCnt = 0;
                }
        }

        /* for loop termination */
        if (ZeroCntOrgnl > MaxConsecutiveZero)
                MaxConsecutiveZero = ZeroCntOrgnl;

        return MaxConsecutiveZero;
}

int CountConsecutivesOnes(int *arr, int n) {

        int MaxConsecutiveOnes = 0, TotalSubsetOnes = 0;
        int TotalSubsetZeros = 0;

        /* These two finction are just additional
         * function to find subset of 1s and 0s in array
         */
        /* find the all subsets of ones in array */
        TotalSubsetOnes = GetTotalSubsetOfOnes(arr, n);
        printf("TotalSubsetOnes:%d\n",TotalSubsetOnes);

        /* Find all subsets of zeros in array */
        TotalSubsetZeros = GetTotalSubsetOfZeros(arr, n);

        printf("TotalSubsetZeros:%d\n",TotalSubsetZeros);

        MaxConsecutiveOnes = CountMaxOnesInAllSubSetOnes(arr, n);

        return MaxConsecutiveOnes;
}

int CountConsecutivesZeros(int *arr, int n) {

        int MaxConsecutiveZeros = 0;

        MaxConsecutiveZeros = CountMaxOnesInAllSubSetZeros(arr, n);

        return MaxConsecutiveZeros;
}

int main() {

        int arr[100] = {0};
        int i, n = 0;
        int MaxConsecutiveOnes = 0, MaxConsecutiveZeros = 0;

        printf("Enter the number of elements in array\n");
        scanf("%d", &n);

        printf("Enter all elements in array in form of 0 and 1\n");
        for (i = 0; i < n; i++) {
                scanf("%d", &arr[i]);
        }

        printf("Entered array is: ");
        Print_Array(arr, n);

        MaxConsecutiveOnes = CountConsecutivesOnes(arr, n);
        printf("MaxConsecutiveOnes=%d\n",MaxConsecutiveOnes);

        MaxConsecutiveZeros = CountConsecutivesZeros(arr, n);
        printf("MaxConsecutiveZeros=%d\n",MaxConsecutiveZeros);



        return 0;
}
  
