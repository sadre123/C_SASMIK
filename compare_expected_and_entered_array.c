/*
 * A school is trying to take an annual photo of all the students. The students are asked to stand in a single
 * file line in non-decreasing order by height. Let this ordering be represented by the integer array expected
 * where expected[i] is the expected height of the ith student in line.
 *
 * You are given an integer array heights representing the current order that the students are standing in.
 * Each heights[i] is the height of the ith student in line (0-indexed).
 *
 * Return the number of indices where heights[i] != expected[i].
 *
 * Input: heights = [1,1,4,2,1,3]
 * Output: 3
 * Explanation:
 * heights:  [1,1,4,2,1,3]
 * expected: [1,1,1,2,3,4]
 * Indices 2, 4, and 5 do not match
 *
 *
 * Input: heights = [5,1,2,3,4]
 * Output: 5
 * Explanation:
 * heights:  [5,1,2,3,4]
 * expected: [1,2,3,4,5]
 * All indices do not match.
 *
 */

#include <stdio.h>
#include <stdlib.h>


int heightChecker(int* heights, int heightsSize) {

        int i, j, TotalDiffIndex = 0, temp = 0;

        static int *expected;

        expected = malloc(heightsSize * sizeof(int));

        //copy to expected array
        for (i = 0; i < heightsSize; i++) {
                expected[i] = heights[i];
        }
        //sort the array
        for (i = 0; i < heightsSize; i++) {
                for (j = 0; j < heightsSize - 1 - i; j++) {
                        if (expected[j] > expected[j+1]) {
                                //swap
                                temp = expected[j];
                                expected[j] = expected[j+1];
                                expected[j+1] = temp;
                        }
                }
        }

        for (i = 0; i < heightsSize; i++) {

                if (heights[i] != expected[i])
                        TotalDiffIndex++;
        }

        return TotalDiffIndex;
}
int main() {

        int arr[20] = {0};
        int n = 0, i, TotalMismatchIndex = 0;

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

        TotalMismatchIndex = heightChecker(arr, n);

        printf("TotalMismatchIndex=%d\n",TotalMismatchIndex);

        return 0;
}
