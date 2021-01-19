// C++ code for Pascal's Triangle
#include <stdio.h>

// Function to print first
// n lines of Pascal's
// Triangle
void row(const int k, const int i, const int c) {
  if (k > i) return;
  printf( "%d, ", c);
  const int a = c * (i-k)/(k+1);
  return row(k+1, i, a);
}
void col(const int i, const int n) {
  if (i > n) return;
  row(0, i, 1);
  printf("\n");
  return col(i+1, n);
}


// Driver program
int main()
{
    const int input = 10;
    printf( "[INPUT] %d\n", input);
    printf( "[OUTPUT] \n");
    col(0, input);
	return 0;
}
