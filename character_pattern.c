#include<stdio.h>
int main()
{
   int n;
   printf("Enter the number of row\n");
   scanf("%d",&n);
   for(int i=1;i<=n;i++)
   {
                         char ch='A';
      for(int j=1;j<=i;j++)
      {
        printf("%c",ch++);

      }
      ch--;
      for(int k=1;k<i;k++)
      {
        
        printf("%c",--ch);
      }
      printf("\n");
   }
   
   
   return 0;
}

   /*                     A
                          ABA
                          ABCBA
                          ABCDCBA
                          ABCDEDCBA             */