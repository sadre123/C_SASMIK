/* print in roman for a given number
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define __DEBUG__

#ifdef __DEBUG__
#define debug(fmt,args...) printf (fmt ,##args)
#endif

char *roman_listSingleDigits[] = {"I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};

char *roman_listTwoDigits[] = {"X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};

char Garr[10] = {'\0'};

int GetNoofDigits(int num) {

        int digitCount = 0;

        while (num) {

                num = num/10;
                digitCount++;
        }

        return digitCount;
}

void ConcatenateTwoList(char *Rfirst, char *Rsecond) {

        char *TmpPtr = malloc(10);
        strcpy(TmpPtr, Rfirst);
#ifdef __DEBUG__
        debug("Rfirst = %s and Rsecond=%s\n",Rfirst, Rsecond);
#endif
        TmpPtr = strcat(TmpPtr, Rsecond);

        strcpy(Garr, TmpPtr);

        free(TmpPtr);
}
char *Print_Roman(int num) {

        int digitCount = 0;
        int i, rem = 0;
        char *Rptr = NULL;

        /* first count the total number of digits */
        digitCount = GetNoofDigits(num);

#ifdef __DEBUG__
        debug("digitCount = %d\n",digitCount);
#endif

        switch (digitCount) {

                case 1:
                        for (i = 0; i <= 8; i++) {

                                if (num == i + 1) {
                                        Rptr = roman_listSingleDigits[i];
                                        break;
                                }
                        }
                        break;
                case 2:
                        if (num % 10 == 0) {
                                for (i = 0; i <= 8; i++) {
                                        if (num == ((i * 10) + 10)) {
                                                Rptr = roman_listTwoDigits[i];
                                                break;
                                        }
                                }
                        } else {
                                /* if number is not perfectaly divisible by 10 */
                                if (num < 40) {
                                        for (i = 11; i < 39; i++) {
                                                if (num == i) {
                                                        rem = num % 10;
                                                        break;
                                                }
                                        }
                                        if (num > 10 && num <= 19) {
                                                ConcatenateTwoList(roman_listTwoDigits[0],
                                                        roman_listSingleDigits[rem - 1]);
                                                Rptr = Garr;
                                        } else if (num > 20 && num <= 29) {
                                                ConcatenateTwoList(roman_listTwoDigits[1],
                                                        roman_listSingleDigits[rem - 1]);
                                                Rptr = Garr;
                                        } else if (num > 30 && num <= 39) {
                                                ConcatenateTwoList(roman_listTwoDigits[2],
                                                                roman_listSingleDigits[rem - 1]);
                                                Rptr = Garr;
                                        }
                                } else {

                                        if (num > 40 && num <= 50) {
                                                rem = num % 10;

                                                ConcatenateTwoList(roman_listTwoDigits[3],
                                                        roman_listSingleDigits[rem - 1]);
                                        } else if (num > 50 && num <= 59) {
                                                rem = num % 10;
                                                ConcatenateTwoList(roman_listTwoDigits[4],
                                                        roman_listSingleDigits[rem - 1]);
                                        } else if (num > 60 && num <= 69) {
                                                rem = num % 10;
                                                ConcatenateTwoList(roman_listTwoDigits[5],
                                                        roman_listSingleDigits[rem - 1]);
                                        } else if (num > 70 && num <= 79) {
                                                rem = num % 10;
                                                ConcatenateTwoList(roman_listTwoDigits[6],
                                                        roman_listSingleDigits[rem - 1]);
                                        } else if (num > 80 && num <= 89) {
                                                rem = num % 10;
                                                ConcatenateTwoList(roman_listTwoDigits[7],
                                                        roman_listSingleDigits[rem - 1]);
                                        } else if (num > 90 && num <= 99) {
                                                rem = num % 10;
                                                ConcatenateTwoList(roman_listTwoDigits[7],
                                                        roman_listSingleDigits[rem - 1]);
                                        }
                                        Rptr = Garr;
                                }
                        }
                        break;
                case 3:
                        break;
                case 4:
                        break;
                case 5:
                        break;
                default:
                        break;
        }

        return Rptr;
}


int main() {

        int num = 0;
        char *Rptr = NULL;
enter_num:
        printf("Enter a number :");
        scanf("%d",&num);

        if (num <= 0 || (GetNoofDigits(num) > 5)) {
                printf("Please enter positive 5 digit number\n");
                goto enter_num;
        }

        Rptr = Print_Roman(num);
        printf("Given number :%d in roman format is: %s\n",num, Rptr);

        return 0;
}
