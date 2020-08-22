1 /*
  2  * An operator specifies an operation to be performed that yields a value.
  3  */
  4 #include <stdio.h>
  5
  6 int main()
  7 {
  8
  9         /*
 10          * Arithmetic Operators
 11          * 1. Unary arithmetic operators : +x , -b
 12          * 2. Binary Arithmetic Operators: +, -, *, /, %
 13          */
 14         int a = 16, b = 5;
 15         printf ("Sum = %d\n", a + b) ;
 16         printf("Difference = %d\n", a - b);
 17         printf ("Product = %d\n", a * b);
 18         printf("Quotient = %d\n", a/b);
 19         printf ("Remainder = %d\n", a % b) ;
 20
 21         /* Note: The modulus operator % cannot be used with floating point numbers */
 22
 23         float c = 5, d = 2;
 24         printf("result=%f\n",c/d);
 25
 26
 27         /* conditional operator
 28          * Conditional operator is a ternary operator ( ? and: )
 29          */
 30         int e, f, max;
 31         printf ("Enter values for e and f : ");
 32         scanf("%d %d",&e, &f);
 33         max = e > f ? e : f; /*ternary operator*/
 34         printf("Larger of %d and %d is %d\n", e, f,max);
 35
 36         return 0;
 37 }
