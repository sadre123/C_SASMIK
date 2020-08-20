1 #include<stdio.h>
  2
  3 /*Characters are printed on the screen through the keyboard but some characters such
  4  * as newline, tab, backspace cannot be printed like other normal characters.
  5  * C supports the combination of backslash (\)
  6  * and some characters from the C character set to print these characters
  7  * These. character combinations are known as escape sequences and are represented by two characters.
  8  * The first character is "\" and second character is from the C character set.
  9  */
 10
 11 int main()
 12 {
 13
 14         /* Moves the cursor to the previous position of the
 15          * current line
 16          */
 17         printf("Hello world");
 18         printf("\b");
 19
 20         //output Hello worl
 21
 22         /* Produces a beep sound for alert
 23          */
 24         //printf("Hello \a");
 25
 26         /* Moves the cursor to beginning of the current line
 27          */
 28         //printf("Hello\r");
 29
 30         /* Moves the cursor to next vertical tab position
 31          */
 32         //printf("Hello\v");
 33
 34         //output: Hello worlHello
 35         //
 36
 37         /* Moves the cursor to the next horizontal tab position
 38          */
 39         printf("Hello\t");
 40
 41         printf("\\g");
 42
 43         //output: \g
 44         printf("\n");
 45
 46         /* Trigraph Sequence
 47          * First two can '??' and third character is any character from C character ·set
 48          *
 49          * to print trigraph symbol while compiling use option -trigraphs
 50          */
 51         printf("??<");
 52         printf("\n");
 53         printf("??>");
 54         printf("\n");
 55         printf("??(");
 56         printf("\n");
 57         printf("??)");
 58         printf("\n");
 59         printf("??!");
 60         printf("\n");
 61         printf("\n");
 62         printf("??=");
 63         printf("\n");
 64         printf("??-");
 65         printf("\n");
 66
 67         //output :
 68         //{
 69         //}
 70         //[
 71         //]
 72         //|
 73         //
 74         //#
 75         //~
 76         //
 77
78         /*
 79          * There are two types of type qualifiers-
 80          * 1. Size qualifiers : short, long
 81          * 2. Sign qualifiers : signed, unsigned
 82          * When the qualifier unsigned is used the number is always positive,
 83          * and when signed is used number may be positive or negative.
 84          */
 85
 86         return 0;
 87 }


compile the above program with option -trigraphs for trigraph symbols.

ouptupt:

Hello worlHello \g
{
}
[
]
|

#
~
