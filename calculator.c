#include <stdio.h>
#include <math.h>


//
// Simple program which requires two integer inputs on the command line 
//
int main(int argc, char* argv[])
{
  // first check to see if two args (3 including program name) were entered 
  if (argc != 3)
  {
    printf("%s : expected 2 args, please enter two integers\n", argv[0]);
    return 1;
  }

  // at this point we know we have two args, let's check that they are ints
 float first;
  // ssscanf scans a string for a format - in this case an integer (%f) and returns
  // the number of items found
  int found = sscanf(argv[1], "%f", &first);
  if (found != 1)
  {
    printf("first arg is not an integer, enter two ints\n");
    return 1;
  }

  float second;
  found = sscanf(argv[2], "%f", &second);
  if (found != 1)
  {
    printf("second arg is not an integer, enter two ints\n");
    return 1;
  }
        float solution = first + second;
        printf("The sum of %f and %f is %f\n", first, second, solution);
	float solution2 = first - second;
	printf("The difference of %f and %f is %f\n", first, second, solution2);
	float solution3 = first * second;
	printf("The product of %f and %f is %f\n", first, second, solution3);
	float solution4 = first/second;
	printf("The quotient of %f and %f is %f\n", first, second, solution4);
}

