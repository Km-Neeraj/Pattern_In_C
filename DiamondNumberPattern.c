
/*        1 
        1 2 3 
      1 2 3 4 5 
    1 2 3 4 5 6 7 
  1 2 3 4 5 6 7 8 9 
    1 2 3 4 5 6 7 
      1 2 3 4 5 
        1 2 3 
          1     */

#include<stdio.h>
int main()
{
   int row;
   printf("Enter the Number of Row\n");
   scanf("%d",&row);
   for(int i=1;i<=row;i++)
   {
     for(int j=1;j<=2*row-2*i;j++)
    {
        printf(" ");
    } 
    for(int k=1;k<=2*i-1;k++)
    {
      printf("%d ",k);
    }
    printf("\n");
   }
   for(int i=row-1;i>=1;i--)
   {
     for(int j=1;j<=2*row-2*i;j++)
    {
        printf(" ");
    } 
    for(int k=1;k<=2*i-1;k++)
    {
      printf("%d ",k);
    }
    printf("\n");
   }
   return 0;
}