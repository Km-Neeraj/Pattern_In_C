  #include<stdio.h>
  int main()
  {
     int row;
     printf("Enter the number of row\n");
     scanf("%d",&row);
     for(int i=row;i>=1;i--)
     {
         for(int j=1;j<=2*row-2*i;j++)
         {
            printf(" ");
         }
         for(int k=1;k<=2*i-1;k++)
         {
            printf("%d ",k);
         }
         printf("\n");
     }

     for(int i=2;i<=row;i++)
     {
         for(int j=1;j<=2*row-2*i;j++)
         {
            printf(" ");
         }
         for(int k=1;k<=2*i-1;k++)
         {
            printf("%d ",k);
         }
         printf("\n");
     }
     return 0;
  }

/*
            1 2 3 4 5 6 7 8 9 
              1 2 3 4 5 6 7 
                1 2 3 4 5 
                  1 2 3 
                    1 
                  1 2 3 
                1 2 3 4 5 
              1 2 3 4 5 6 7 
            1 2 3 4 5 6 7 8 9         (HourGlassNumberPattern) */