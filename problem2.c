// Creator:  github copilot using the prompt
//
#include <stdio.h>

int fibonacci(int n) {
  if (n <= 1)
    return n;
  else
    return fibonacci(n-1) + fibonacci(n-2);
}

int main() {
  int n = 10;  // Change this to the number you want to calculate
  printf("Fibonacci number is: %d\n", fibonacci(n));
  return 0;
}