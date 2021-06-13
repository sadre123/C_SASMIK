/*
 * Given an array nums of integers, return how many of them contain an even number of digits.
 *
 * e.g : arr [] = {12, 324, 34, 56718};
 *
 * output = 2 ==> 12 two digits even number , 34 two digits even number of digits etc.
 */


#include <stdio.h>
#include <stdlib.h>

int CountDigits(int num) {

        int DigitCount = 0;

        while (num) {

                num = num /10;
                DigitCount++;
        }

        return DigitCount;
}

int FindNumberWithEvenNoofDigits(int *arr, int n) {
        /* strat from the begning of array
         * count total number of digit in each index
         * and then check for even or odd
         */
        int EvenDigitsCount = 0, i, NoofDigits = 0;

        for (i = 0; i < n; i++) {

                NoofDigits = CountDigits(arr[i]);

                if (NoofDigits % 2 == 0)
                        EvenDigitsCount++;
        }

        return EvenDigitsCount;
}

int main() {

        int arr[500] = {0};
        int n = 0, i, TotalNoWithEvenNoofDigits = 0;

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

        TotalNoWithEvenNoofDigits = FindNumberWithEvenNoofDigits(arr, n);

        printf("TotalNoWithEvenNoofDigits = %d\n",TotalNoWithEvenNoofDigits);

        return 0;
}
