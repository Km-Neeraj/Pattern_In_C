     /*      A B C D E F G H I
               A B C D E F G
                 A B C D E
                   A B C
                     A     */

#include<stdio.h>
int main()
{
   int row;
   printf("Enter the number of row\n");
   scanf("%d",&row);
   for(int i=row;i>=1;i--)
   {
       char ch='A';
      for(int j=row;j>i;j--)
      {
        printf(" ");
      }
      for(int k=1;k<=2*i-1;k++)
      {
        printf("%c",ch);
        ch++;
      }
      printf("\n");
   }
   return 0;
}