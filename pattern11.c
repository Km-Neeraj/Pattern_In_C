#include<stdio.h>
int main()
{
   int n;
   printf("Enter the number of lines\n");
   scanf("%d",&n);
   int star=2*n-1;
   for(int i=1;i<=n;i++)
   {
      for(int j=1;j<=star-i;j++)
      {
        printf("*");
      }
      for(int k=1;k<=2*i-1;k++)
      {
          if(k%2==0)
          {
             printf("*");
          }
          else{
               printf("%d",i);
          }
      }
           for(int j=1;j<=star-i;j++)
              {
                  printf("*");
              }

      
      printf("\n");
}
return 0;
}

      /*                            ********1********
                                    *******2*2*******
                                    ******3*3*3******
                                    *****4*4*4*4*****
                                    ****5*5*5*5*5****       */
    