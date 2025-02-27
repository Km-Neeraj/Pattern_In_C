#include<stdio.h>
int main()
{
   int n;
   printf("Enter the number of lines\n");
   scanf("%d",&n);
   for(int i=1;i<=n;i++)
   {
       for(int j=1;j<=n;j++)
       {
          if(j==1||i==n||j==n)
          {
             printf(" * ");
          }
          else{
                   printf("   ");
          }
}
          for(int k=1;k<=n;k++)
          {
              if(i==1||i==n)
              {
                 printf(" * ");
              }
              else{
                        printf("   ");
              }
          }
       
printf("\n");
}  
for(int i=2;i<=n;i++) 
{
     for(int j=1;j<=n;j++)
     {
        if(j==n||i==n)
        {
           printf(" * ");
        }
        else{
               printf("   ");
        }
     }
     for(int k=1;k<=n;k++)
     {
          if(k==n)
          {
            printf(" * ");
          }
          else{
                 printf("   ");
          }
     }
     printf("\n");
}  
       return 0;
   }

   /*                    *           *  *  *  *  *  * 
                         *           *
                         *           *
                         *           *
                         *  *  *  *  *  *  *  *  *  * 
                                     *              * 
                                     *              * 
                                     *              * 
                         *  *  *  *  *              *           */
