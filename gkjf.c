#include <stdio.h>

int main() {
  int a, b, i, product = 0;

  printf("Enter two integers: ");
  scanf(" %d %d ", &a, &b);

  for (i = 1; i <= b; i++) {
    product = product + a;
  }

  printf("Product = %d ", product);

  return 0;
} 