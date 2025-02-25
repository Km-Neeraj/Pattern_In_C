#include<stdio.h>
int main()
{
   int n;
   printf("Enter the number of line\n");
   scanf("%d",&n);
   for(int i=1;i<=n;i++)
   {
      for(int j=1;j<=2*i-2;j++)
      {
        printf(" ");
      }
      for(int k=n;k>=i;k--)
      {
        printf(" *");
      }
      printf("\n");
   }
   for(int i=n-1;i>=1;i--)
   {
      for(int j=1;j<=2*i-2;j++)
      {
        printf(" ");
      }
      for(int k=n;k>=i;k--)
      {
        printf(" *");
      }
      printf("\n");
   }
   return 0;
}


/*                * * * * *
                    * * * *
                      * * *
                        * *
                          *
                        * *
                      * * *
                    * * * *
                  * * * * *        */