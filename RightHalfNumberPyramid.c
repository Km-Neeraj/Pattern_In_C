 /*     1           
        1 2         
        1 2 3 4    
        1 2 3 4 5   */
       
        #include<stdio.h>
        int main()
        {
          int row;
          printf("Enter the number of row\n");
          scanf("%d",&row);
          for(int i=1;i<=row;i++)
          {
               for(int j=1;j<=i;j++)
               {
                   printf("%d ",j);
               }
               printf("\n");
          }
          return 0;
        }