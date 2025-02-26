#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of lines\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
      for(int j=n;j>=i;j--)
      {
        printf(" ");
      }
      for(int k=1;k<=i;k++)
      {
        printf("%d",k);
      }
      for(int l=1;l<=i;l++)
      {
        printf("%d",l);
      }
      printf("\n");
    }

    for(int i=n-1;i>=1;i--)
    {
      for(int j=n;j>=i;j--)
      {
        printf(" ");
      }
      for(int k=1;k<=i;k++)
      {
        printf("%d",k);
      }
      for(int l=1;l<=i;l++)
      {
        printf("%d",l);
      }
      printf("\n");
    }
    return 0;
}


/*   11
    1212
   123123
  12341234
 1234512345
  12341234
   123123
    1212
     11       */