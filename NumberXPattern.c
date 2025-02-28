#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of lines\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=i;j>1;j--)
        {
           printf(" ");
        }
        for(int k=i;k<=2*n-i;k++)
        {
           if(k==i||k==2*n-i)
           {
             printf("%d",k);
           }
           else{
                  printf(" ");
           }
             
        }
        printf("\n");
    }

    for(int i=n-1;i>=1;i--)
    {
        for(int j=i;j>1;j--)
        {
           printf(" ");
        }
        for(int k=i;k<=2*n-i;k++)
        {
           if(k==i||k==2*n-i)
           {
             printf("%d",k);
           }
           else{
                  printf(" ");
           }
             
        }
        printf("\n");
    }
    return 0;
}

/*                      1     7
                         2   6
                          3 5
                           4
                          3 5
                         2   6
                        1     7         */