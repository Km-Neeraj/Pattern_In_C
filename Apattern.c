#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of lines\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
      if(i==0||i==n/2||j==n-1||j==0)
      {
         printf("*");
      }
      else{
              printf(" ");
      }
      printf("\n");
    }
    return 0;
}