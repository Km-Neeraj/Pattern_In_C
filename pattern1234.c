#include<stdio.h>
int main()
{
  int n;
  printf("Enter the number of row\n");
  scanf("%d",&n);
  for(int i=1;i<=n;i++)
  {
     for(int l=1;l<=i;l++)
     {
       printf("*");
     }
     for(int j=1;j<=2*n-2*i;j++)
     {
        printf(" ");
     }
     for(int k=1;k<=i;k++)
     {
       printf("*");
     }
     printf("\n");
  }

  for(int i=n;i>=1;i--)
  {
     for(int l=1;l<=i;l++)
     {
       printf("*");
     }
     for(int j=1;j<=2*n-2*i;j++)
     {
        printf(" ");
     }
     for(int k=1;k<=i;k++)
     {
       printf("*");
     }
     printf("\n");
  }
  return 0;
}

   /*                    *        *
                         **      **
                         ***    ***
                         ****  ****
                         **********
                         **********
                         ****  ****
                         ***    ***
                         **      **
                         *        *         */