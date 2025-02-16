  /*  A
      A B
      A B C
      A B C D
      A B C D E    */

      #include<stdio.h>
      int main()
      {
         char ch;
         int row;
         printf("Enter the number of row\n");
         scanf("%d",&row);
         for(int i=0;i<row;i++)
         {
              ch='A';
             for(int j=0;j<=i;j++)
             {
                 printf("%c ",ch);
                 ch++;
             }
             printf("\n");
         }
         return 0;
      }