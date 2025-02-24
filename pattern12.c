#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of line\n");
    scanf("%d",&n);
    int n1=1;
    for(int i=1;i<=n;i++)
    {
         for(int j=1;j<=2*i-1;j++)
         {
             if(j%2==0)
             {
                printf("*");
                
             }
             else{
                         printf("%d",n1++);
             }
           
         }
         printf("\n");
         
}

return 0;
}