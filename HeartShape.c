#include<stdio.h>
int main()
{
  int n;
  printf("Enter the number of lines\n");
  scanf("%d",&n);
  for(int i=1;i<=n;i++)
  {
   for(int j=n;j>i;j--)
   {
       printf(" ");
   }
   for(int k=1;k<=2*i+2;k++)
   {
       printf("*");
   }
   for(int l=i;l<=2*n-i;l++)
   {
       printf(" ");
   }
   for(int m=1;m<=2*i+2;m++)
   {
      printf("*");
   }
     printf("\n");
  }
  for(int i=1;i<=3*n;i++)
  {
    for(int j=i;j>1;j--)
    {
       printf(" ");
    }
    for(int k=2*(3*n)-i;k>=i;k--)
    {
      printf("*");
    }
    printf("\n");
  }
  return 0;
}

/*              ****     ****
               ******   ******
              ******** ********
              *****************
               ***************
                *************
                 ***********
                  *********
                   *******
                    *****
                     ***
                      *      */