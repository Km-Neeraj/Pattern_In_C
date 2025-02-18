#include<stdio.h>
int main()
{
  int row;
  printf("Enter the number of row\n");
  scanf("%d",&row);
  for(int i=1;i<=row;i++)
  {
     for(int j=1;j<=row;j++)
     {
        if(i==1||i==row||j==row||j==1)
        {
           printf("* ");
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

/*        * * * * * 
          *       * 
          *       * 
          *       * 
          * * * * *     (HollowSquareStarPattern)   */