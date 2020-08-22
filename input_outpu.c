1 /*
  2  *
  3  */
  4 #include <stdio.h>
  5
  6
  7 int main()
  8 {
  9         int a, b, c;
 10         int ret = 0;
 11
 12         ret = scanf("%d:%d:%d",&a, &b, &c);
 13         /* input should be in the form 10:20:30
 14          * if we will give input other than this format then
 15          * only first value will get stored properly , but others two
 16          * value will be garbage
 17          * e.g : 10 693614944 32766
 18          */
 19         printf("ret value of scanf():%d\n",ret);
 20         printf("%d %d %d\n",a, b, c);
 21
 22         /* formatted input output
 23          * %wd : Here 'd' is the conversion specification character for integer value and 'w'
 24          * is an integer number specifying the ,maximum field width of input data.
 25          */
 26         /* if input is like this , then output will be as below
 27          * 123 4567 89123
 28          * 12 3 4567
 29          * if input is greater than width then it will ignored and assigned it to next
 30          * valriable
 31          */
 32         scanf("%2d %3d %4d",&a, &b, &c);
 33
 34         printf("%d %d %d\n",a, b, c);
 35
 36         /* When length of variable is more than the width specifier,
 37          * then also the output is printed correctly.
 38          */
 39         a = 1234, b = 12345, c = 123456;
 40         printf("%3d %4d %5d\n",a, b, c);
41
 42         /* Suppression Character in scanf
 43          * If we want to skip any input field then we specify * between the %
 44          * sign and the conversion specification. The input field is read but
 45          * its value is not assigned to any address
 46          */
 47         return 0;
 48 }
