1 /*
  2  * This program is about to , print number in octal and hexadecimal with given decimal number
  3  * as input
  4  */
  5
  6 #include <stdio.h>
  7
  8 int main()
  9 {
 10
 11         int num;
 12
 13
 14         printf("Enter the number in decimal : ");
 15         scanf("%d", &num);
 16
 17
 18         printf("Octal equvalent of decimal number %d = %o\n",num,num);
 19         printf("Hexe quvalent of decimal number %d = %x\n",num,num);
 20
 21         return 0;
 22 }
