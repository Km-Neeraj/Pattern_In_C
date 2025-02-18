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
       return 0;
     }