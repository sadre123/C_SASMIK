/* Enter any three digit number and print the greatest and smallest number
 * number to be formed by entered number.
 * e.g num = 213 => greatest num = 321, smallest_number = 123;
 */

#include <stdio.h>
#include <stdlib.h>

#define THREE   3
#define ONE     1

int is_not_3_digit(int num) {

        int digit_cnt = 0;

        while (num) {
                num = num/10;
                digit_cnt++;
        }

        if (digit_cnt == THREE)
                return 0;

        return ONE;
}

void Get_max_min_digit(int *arr, int *max_digit, int *min_digit) {

        /* get the maximum digit out of the array */
        if ((*(arr+0) > *(arr+1)) && (*(arr+0) > *(arr+2)))
                *max_digit = *(arr+0);
        else if((*(arr+1) > *(arr+0)) && (*(arr+1) > *(arr+2)))
                *max_digit = *(arr+1);
        else
                *max_digit = *(arr+2);

        /* get the minimum digit out of array */

        if ((*(arr+0) < *(arr+1)) && (*(arr+0) < *(arr+2)))
                *min_digit = *(arr+0);
        else if((*(arr+1) < *(arr+0)) && (*(arr+1) < *(arr+2)))
                *min_digit = *(arr+1);
        else
                *min_digit = *(arr+2);
}
void Get_mid_digit(int *arr, int max_digit, int min_digit, int *mid_digit) {

        if ((*(arr+0) == max_digit) && (*(arr+1) == min_digit))
                *mid_digit = *(arr+2);
        else if ((*(arr+1) == max_digit) && (*(arr+2) == min_digit))
                *mid_digit = *(arr+0);
        else
                *mid_digit = *(arr+1);
}

int Greatest_number(int *arr) {

        int max_digit = 0, min_digit = 0, mid_digit = 0;
        int greatest_num = 0;

        /* Get max and min digit */
        Get_max_min_digit(arr, &max_digit, &min_digit);

        Get_mid_digit(arr, max_digit, min_digit, &mid_digit);

        /* form greatest number */
        greatest_num = max_digit;
        greatest_num = greatest_num * 10 + mid_digit;
        greatest_num = greatest_num * 10 + min_digit;

        return greatest_num;
}

int Smallest_number(int *arr) {

        int max_digit = 0, min_digit = 0, mid_digit = 0;
        int smallest_num = 0;

        /* Get max and min digit */
        Get_max_min_digit(arr, &max_digit, &min_digit);

        Get_mid_digit(arr, max_digit, min_digit, &mid_digit);

        /* form greatest number */
        smallest_num = min_digit;
        smallest_num = smallest_num * 10 + mid_digit;
        smallest_num = smallest_num * 10 + max_digit;

        return smallest_num;
}


int main() {

        int num = 0, arr[3] = {0}, i;

enter_num:
        printf("Enter any three digit number:");
        scanf("%d",&num);

        if (num < 0 || is_not_3_digit(num)) {
                printf("Please enter a proper 3 digit positive number\n");
                goto enter_num;
        }

        /* get the individual number */
        for (i = 0; i < 3; i++) {
                arr[i] = num%10;
                num = num/10;
        }

        /* form the greatest number */
        num = Greatest_number(arr);
        printf("Greatest number is :%d\n",num);

        /* form smallest number */
        num = Smallest_number(arr);
        printf("Smallest number:%d\n",num);

        return 0;
}
