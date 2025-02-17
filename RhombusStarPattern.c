/*   * * * * * 
    * * * * * 
   * * * * * 
  * * * * * 
 * * * * *       */


#include<stdio.h>
int main()
{
  int row;
  printf("Enter the number of row\n");
  scanf("%d",&row);
  for(int i=0;i<row;i++)
  {
    for(int j=row;j>i;j--)
    {
      printf(" ");
    }
    for(int k=0;k<row;k++)
    {
      printf("* ");
    }
    printf("\n");
  }
  return 0;
}