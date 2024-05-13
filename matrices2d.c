#include <stdio.h>
int main() {
  int r, c, a[100][100], b[100][100], sum[100][100],mul[100][100], i, j;
  printf("Enter the number of rows (between 1 and 100): ");
  scanf("%d", &r);
  printf("Enter the number of columns (between 1 and 100): ");
  scanf("%d", &c);

  printf("\nEnter elements of 1st matrix:\n");
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      printf("Enter element a%d%d: ", i + 1, j + 1);
      scanf("%d", &a[i][j]);
    }

  printf("Enter elements of 2nd matrix:\n");
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      printf("Enter element b%d%d: ", i + 1, j + 1);
      scanf("%d", &b[i][j]);
    }
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      sum[i][j] = a[i][j] + b[i][j];
    }
  printf("\nSum of two matrices: \n");
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      printf("%d   ", sum[i][j]);
      if (j == c - 1) {
        printf("\n\n");
      }
    }
    for(i = 0; i < 3; i++)
    {
      for(j = 0; j < 3; j++)
      {
     mul[i][j] = 0
     for(k = 0; k < 3; k++)
     {
        mul[i][j] = mul[i][j] + (a[i][k] * b[k][j]);
     }
      }
   }
   printf("The resultant 3*3 matrix c is \n");
   for(i = 0; i < 3; i++)
   {
      for(j = 0; j < 3; j++)
      {
     printf("%d\t", mul[i][j]);
      }
      printf("\n");
   }

  return 0;
}
