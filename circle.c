 1 /*
  2  * This program is about to calculate the area & perimeter of circle
  3  * take radious as input
  4  *
  5  * Area of circle = pi * r^2 , pi = 3.14
  6  *
  7  * Perimeter = 2 * pi * r;
  8  */
  9
 10 #include <stdio.h>
 11
 12 int main()
 13 {
 14
 15         int radius = 0;
 16
 17         float pi = 3.14;
 18
 19         float A, P;
 20
 21
 22         printf("Enter radius of circle : ");
 23         scanf("%d", &radius);
 24
 25         A = (pi * radius * radius);
 26
 27         printf("Area of circle with radius %d = %f\n",radius, A);
 28
 29         P = (2 * pi * radius);
 30
 31         printf("Perimeter of circle with radius %d = %f\n",radius, P);
 32
 33         return 0;
 34 }
