/* check a number is power of two or not ? */

#include <stdio.h>

int main() {

        int num = 0, mask = 0;

        printf("Enter integer number :");
        scanf("%d", &num);

        if (num == 0) {
                printf("Enter the non-zero number\n");
                return -1;
        }

        mask = (num-1);

        if ((num & mask) == 0)
                printf("Given integer number is power of 2..\n");
        else
                printf("Given integer is not power of 2..\n");

        return 0;
}
