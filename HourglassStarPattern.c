   #include<stdio.h>
   int main()
   {
      int row;
      printf("Enter the number oof row\n");
      scanf("%d",&row);
      for(int i=1;i<=row;i++)
      {
         for(int j=1;j<=2*i-2;j++)
         {
           printf(" ");
         }
         for(int k=i;k<=2*row-i;k++)
         {
            printf(" *");
         }
         printf("\n");
      }

      for(int i=row-1;i>=1;i--)
      {
         for(int j=1;j<=2*i-2;j++)
         {
           printf(" ");
         }
         for(int k=i;k<=2*row-i;k++)
         {
            printf(" *");
         }
         printf("\n");
      }
      return 0;
   }
   /*     * * * * * * * * *
            * * * * * * *
              * * * * *
                * * *
                  *
                * * *
              * * * * *
            * * * * * * *
          * * * * * * * * *     (HourGlass Star Pattern) */