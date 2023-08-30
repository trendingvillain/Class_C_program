\* Reverse and Forward Pyramid */
#include <stdio.h>
#include <conio.h>
void main()
{
  int n, i, j;
  clrscr();
  printf("Enter number of rows\n");
  scanf("%d", &n);
  for (i=n;i>=0;i--)
  {
      for(j=0;j<=i;j++)
      {
          printf("*");
      }
      printf("\n");
  }
   for (i=1;i<=n;i++)
  {
      for (j=0;j<=i;j++)
      {
          printf("*");
          
      }
      printf("\n");
  }
  getch();
 }

/*
Output:
Enter number of rows
4
*****
****
***
**
*
**
***
****
*****
*/
