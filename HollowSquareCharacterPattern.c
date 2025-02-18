#include<stdio.h>
int main()
{
    int row;
    printf("Enter the number of row\n");
    scanf("%d",&row);
    for(int i=1;i<=row;i++)
    { 
         char ch='A';
       for(int j=1;j<=row;j++)
       {
            if(i==1||j==1||i==row||j==row)
            {
              printf("%c ",ch);
              ch++;
            }
            else{
                   printf("  ");
                   ch++;
            }
       }
       printf("\n");
    }
    return 0;
}

/*                             A B C D E 
                               A       E 
                               A       E 
                               A       E 
                               A B C D E      (HollowCharacterPattern)   */