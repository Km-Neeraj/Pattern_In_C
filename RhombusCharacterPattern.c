/*   A B C D E 
    A B C D E 
   A B C D E 
  A B C D E 
 A B C D E      */



#include<stdio.h>
int main()
{
   int row;
   printf("Enter the number of row\n");
   scanf("%d",&row);
   for(int i=0;i<row;i++)
   {
      char ch='A';
     for(int j=row;j>i;j--)
     {
        printf(" ");
     }
     for(int k=1;k<=row;k++)
     {
        printf("%c ",ch);
        ch++;
     }
     printf("\n");
   }
   return 0;
}