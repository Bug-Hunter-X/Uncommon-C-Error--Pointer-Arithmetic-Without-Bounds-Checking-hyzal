#include <stdio.h>
#include <stdlib.h>

int main() {
  int x = 10;
  int *ptr = (int *)malloc(sizeof(int)); // Allocate memory
  if (ptr == NULL) { // Check for memory allocation failure
    fprintf(stderr, "Memory allocation failed\n");
    return 1; 
  }
  *ptr = 20; 
  printf("%d\n", x); // Prints 10
  printf("%d\n", *ptr); // Prints 20
  free(ptr); // Free allocated memory
  return 0;
} 