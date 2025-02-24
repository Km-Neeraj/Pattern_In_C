#include<stdio.h>
int main()
{
   int n;
   printf("Enter the number of line\n");
   scanf("%d",&n);
   for(int i=1;i<=n;i++)
   {
      for(int j=1;j<=2*i-1;j++)
      {
        if(j%2==0)
        {
          printf("*");
        }
        else{

               printf("%d",i);
        }
}
      printf("\n");
   }
   for(int i=n-1;i>=1;i--)
   {
      for(int j=1;j<=2*i-1;j++)
      {
        if(j%2==0)
        {
          printf("*");
        }
        else{

               printf("%d",i);
        }
}
      printf("\n");
   }
   return 0;
}
/*                          1
                            2*2
                            3*3*3
                            4*4*4*4
                            5*5*5*5*5
                            4*4*4*4
                            3*3*3
                            2*2
                            1              */