#include <stdio.h>
#include <math.h>
#include <string.h>

float add(float smaller, float larger) 
{
  float solution = (smaller + larger);
  return solution;
}

float sub(float smaller, float larger) 
{
  float solution = (smaller - larger);
  return solution;
}

float mult(float smaller, float larger) 
{
  float solution = (smaller * larger);
  return solution;
}

float div(float smaller, float larger)     //we need the second to be float for it to work
{
  float solution = (smaller / larger);
  return solution;
}

float exponent(float smaller, float larger)
{
  float solution = powf(smaller, larger);
  return solution;
}

//
// Simple program which requires two integer inputs on the command line 
//
int main(int argc, char* argv[])
{
  // first check to see if two args (3 including program name) were entered 
  if (argc != 4)
  {
    printf("%s : expected 3 args, please enter two integers\n", argv[0]);
    return 1;
  }

  // at this point we know we have two args, let's check that they are ints
 float smaller;
  // ssscanf scans a string for a format - in this case an integer (%f) and returns
  // the number of items found
  int found = sscanf(argv[1], "%f", &smaller);
  if (found != 1)
  {
    printf("first arg is not an float, enter two floats\n");
    return 1;
  }
  char operation[2];
  found = sscanf(argv[2], "%s", operation);
  if (found != 1)
  {
    printf("Operation is not a character. Enter a character in arg2.\n");
  }
  float larger;
  found = sscanf(argv[3], "%f", &larger);
  if (found != 1)
  {
    printf("second arg is not an float, enter two floats\n");
    return 1;
  }
