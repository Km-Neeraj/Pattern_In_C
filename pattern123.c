#include<stdio.h>
int main()
{
   int n;
   printf("Enter tghe number of line\n");
   scanf("%d",&n);
   for(int i=5;i>=1;i--)
   {
      for(int j=1;j<=i;j++)
      {
        printf("*");
      }
      for(int k=1;k<=2*n-2*i;k++)
      {
        printf(" ");
      }
      for(int l=1;l<=i;l++)
      {
        printf("*");
      }
      printf("\n");
   }

   for(int i=1;i<=n;i++)
   {
      for(int j=1;j<=i;j++)
      {
        printf("*");
      }
      for(int k=1;k<=2*n-2*i;k++)
      {
        printf(" ");
      }
      for(int l=1;l<=i;l++)
      {
        printf("*");
      }
      printf("\n");
   }
   
   return 0;
}

/*                    **********
                      ****  ****
                      ***    ***
                      **      **
                      *        *
                      *        *
                      **      **
                      ***    ***
                      ****  ****
                      **********         */