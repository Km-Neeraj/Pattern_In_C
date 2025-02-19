#include<stdio.h>
int main()
{
  int row;
  printf("Enter the number of row\n");
  scanf("%d",&row);
  for(int i=1;i<=row;i++)
  {
      for(int j=1;j<=2*row-2*i;j++)
      {
         printf(" ");
      }
      for(int k=1;k<=2*i-1;k++)
      {
         if(i==1||k==1||k==2*i-1)
         {
           printf(" %d",k);
         }
         else
         {
             printf("  ");
         }
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
         if(i==1||k==1||k==2*i-1)
         {
           printf(" %d",k);
         }
         else
         {
             printf("  ");
         }
      }
      printf("\n");
  }
   return 0;
} 


/*       1
       1   3
     1       5
   1           7
 1               9
   1           7
     1       5
       1   3
         1               (HollowDiamondNumberPattern)*/