#include <stdio.h>

int main()
{
  int sum = 0;
  for (int i = 0; i < 1000; i++)
  {
    if (i % 3 == 0 || i % 5 == 0)
    {
      sum += i;
    }
  }
  printf("%d\n", sum);
  return 0;
}


// Alexis: todo
// I need to add the recursive fibonacci function to the code above.