 1 #include <stdio.h>
  2
  3 int main(int argc, char*argv[])
  4 {
  5         int distance = 1000;
  6         float power = 1.345f;
  7         double super_power = 66789.4536;
  8         char initial = 'A';
  9         char first_name[] = "alam";
 10         char last_name[] = "Azam";
 11
 12         printf("You are %d miles away.\n", distance);
 13         printf("You have %f levels of power.\n", power);
 14         printf("You have %f awesome super powers.\n", super_power);
 15         printf("I have an initial %c.\n", initial);
 16         printf("I have a first name %s.\n", first_name);
 17         printf("I have a last name %s.\n", last_name);
 18         printf("My whole name is %s %c. %s.\n",first_name, initial, last_name);
 19
 20         int bugs = 100;
 21         double bug_rate = 1.2;
 22
 23         printf("You have %d bugs at the imaginary rate of %f.\n", bugs, bug_rate);
 24
 25         long universe_of_defects = 1L * 1024L * 1024L * 1024L * 1024L * 1024L * 1024L *
 26                 1024L * 1024L * 1024L;
 27
 28         printf("The entire universe has %ld bugs.\n", universe_of_defects);
 29
 30         double expected_bugs = bugs * bug_rate;
 31         printf("You are expected to have %f bugs.\n", expected_bugs);
 32
 33         double part_of_universe = expected_bugs / universe_of_defects;
 34         printf("That is only a %e portion of the universe.\n",part_of_universe);
 35
 36         char nul_byte = '\0';
 37         int care_percentage = bugs * nul_byte;
 38
 39         printf("Which means you should care %d%%.\n",care_percentage);
 40
 41         printf("########%c\n",nul_byte);
 42
 43         return 0;
 44  }
