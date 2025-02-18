#include<stdio.h>
     int main()
     {
       int row;
       printf("Enter the Number of row\n");
       scanf("%d",&row);
       for(int i=row;i>=1;i--)
       {
           char ch='A';
           for(int j=1;j<2*row-2*i;j++)
           {
              printf(" ");
           }
           for(int k=1;k<=2*i-1;k++)
           {
              printf("%c ",ch);
              ch++;
           }
           printf("\n");
       }

           for(int i=2;i<=row;i++)
       {
           char ch='A';
           for(int j=1;j<2*row-2*i;j++)
           {
              printf(" ");
           }
           for(int k=1;k<=2*i-1;k++)
           {
              printf("%c ",ch);
              ch++;
           }
           printf("\n");
       }
       return 0;
     }


/*           A B C D E F G H I
               A B C D E F G
                 A B C D E
                   A B C 
                     A
                   A B C
                 A B C D E
               A B C D E F G
             A B C D E F G H I        (CharacterHourGlass) */
