   #include<stdio.h>
   int main()
   {
       int n;
       printf("Enter the number of lines\n");
       scanf("%d",&n);
       for(int i=1;i<=n;i++)
       {
            for(int k=n;k>=i;k--)
            {
               printf(" ");
            }
          for(int j=1;j<=2*i;j++)
          {
              if(j%2==0)
              {
                printf("0");
              }
              else{
                     printf("1");
              }
          }
          printf("\n");
       }
       return 0;
   }

   /*                     10
                         1010
                        101010                 
                       10101010
                      1010101010             */