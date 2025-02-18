   #include<stdio.h>
   int main()
   {
       int row;
       printf("Enter the number of row\n");
       scanf("%d",&row);
       for(int i=1;i<=row;i++)
       {
             for(int j=1;j<=row;j++)
             {
                if(i==1||i==row||j==1||j==row)
                {
                    printf("%d ",j);
                }
                else{
                       printf("  ");
                }
             }
             printf("\n");
       }
       return 0;
   }

   /*                 1 2 3 4 5 
                      1       5 
                      1       5 
                      1       5 
                      1 2 3 4 5     (HollowSquareNumberPattern)   */