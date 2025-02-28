#include<stdio.h>
int main()
{
     int n;
     printf("Enter the number of lines\n");
     scanf("%d",&n);
     char ch='A';
     for(int i=1;i<=n;i++)
     {
                         
        for(int j=1;j<=2*i-1;j++)
        {
           printf("%d",i);
        }
        printf("\n");
        for(int k=2*i;k>=1;k--)
        {
             printf("%c",ch);
        }
        ch++;
        printf("\n");
     }
     return 0;
}

/*                    1
                      AA
                      222
                      BBBB
                      33333
                      CCCCCC
                      4444444
                      DDDDDDDD      */