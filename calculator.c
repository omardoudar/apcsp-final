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

float div(float smaller, float larger)     
{
  float solution = (smaller / larger);
  return solution;
}

float exponent(float smaller, float larger)
{
  float solution = powf(smaller, larger);
  return solution;
}

int main(int argc, char* argv[])
{
  if (argc != 4)
  {
    printf("%s : expected 3 args, please enter two integers\n", argv[0]);
    return 1;
  }
  
 float smaller;
  int found = sscanf(argv[1], "%f", &smaller);
  if (found != 1)
  {
    printf("First value is not a float.\n");
    return 1;
  }
  float larger;
  found = sscanf(argv[2], "%f", &larger);
  if (found != 1)
  {
    printf("Second value is not a float.\n");
  }
  char operation[3];
  found = sscanf(argv[3], "%s", operation);
  if (found != 1)
  {
    printf("Operation is not a character. Enter a character in arg2.\n");
    return 1;
  }
char plus[3] = "+";
char minus[3] = "-";
char times[3] = "x";
char over[3] = "/";
char power[3] = "^";

if (strcmp(operation, plus) == 0)
  {
    for (int i = 0; i < 100; i++)
 {
      float addition = add(smaller, larger);
      printf("%f + %f is equal to %f\n", smaller, larger, addition);
      larger++;
      smaller--;
      }
  }
if (strcmp(operation, times) == 0)
  {
    for (int i = 0; i < 100; i++)
 {
      float multiplication = mult(smaller, larger);
      printf("%f x %f is equal to %f\n", smaller, larger, multiplication);
      larger++;
      smaller++;
    }
  }
  if (strcmp(operation, power) == 0)
    {
      for (int i = 0; i < 5; i++)
      {
       float exponents = exponent(smaller,larger);
       printf("%f ^ %f is equal to %f\n", smaller, larger, exponents);
       smaller++;
    }
  }
  if (strcmp(operation, minus) == 0)
    {
      for (int i = 0; i < 1; i++)
      {
       float subtraction = sub(smaller,larger);
       printf("%f - %f is equal to %f\n", smaller, larger, subtraction);
    }
  }
   if (strcmp(operation, over) == 0)
    {
      for (int i = 0; i < 1; i++)
      {
       float division = div(smaller,larger);
       printf("%f / %f is equal to %f\n", smaller, larger, division);
    }
  }
}
