#include<stdio.h>
int main()
{
   int row;
   printf("Enter the number of row\n");
   scanf("%d",&row);
   for(int i=1;i<=row;i++)
   {
      for(int j=1;j<=i;j++)
      {
        printf(" * ");
      }
      printf("\n");
   }
   for(int i=row-1;i>=1;i--)
   {
      for(int j=1;j<=i;j++)
      {
       printf(" * ");
      }
      printf("\n");
   }
   return 0;
}


/*               * 
                 *  * 
                 *  *  * 
                 *  *  *  * 
                 *  *  *  *  * 
                 *  *  *  * 
                 *  *  * 
                 *  * 
                 *            (ArrowShapedStarPattern)   */