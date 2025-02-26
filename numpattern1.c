#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of lines\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
       for(int j=i;j<=n;j++)
       {
          printf("%d ",j);
       }
       for(int k=1;k<i;k++)
       {
        printf("%d ",k);  
       }
       printf("\n");
    }
    return 0;
}

/*                    1 2 3 4 
                      2 3 4 1 
                      3 4 1 2 
                      4 1 2 3       */