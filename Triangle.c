#include <stdio.h>
#include <conio.h>
void main()
{
  int n, c, k;
  clrscr();
  printf("Enter number of rows\n");
  scanf("%d", &n);
  for (k=1; k<=n; k++)
  {
    for (c=1; c<=n-k; c++)
      printf(" ");
    for (c=1; c<=2*k-1; c++)
      printf("*");
    printf("\n");
  }
  for (k=1; k<=n-1; k++)
  {
    for (c=1; c<=k; c++)
      printf(" ");
    
  }
getch();
}
