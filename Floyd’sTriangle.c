   #include<stdio.h>
   int main()
   {
     int row;
     printf("Enter the number of row\n");
     scanf("%d",&row);
     int n=1
     for(int i=1;i<=row;i++)
     {
         for(int j=1;j<=i;j++)
         {
             printf("%d ",n++);
         }
         printf("\n");
     }
     return 0;
   }


       /*  1 
           2 3 
           4 5 6 
           7 8 9 10 
           11 12 13 14 15   (Floyd's Triangle)  */