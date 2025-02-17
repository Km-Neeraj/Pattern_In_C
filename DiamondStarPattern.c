  /*    * 
      * * * 
    * * * * * 
  * * * * * * *
* * * * * * * * *
  * * * * * * *
    * * * * *
      * * * 
        *          */
  
  #include<stdio.h>
  int main()
  {
    int row;
    printf("Enter the number of row\n");
    scanf("%d",&row);
    for(int i=1;i<=row;i++)
    {
       for(int j=0;j<2*row-2*i;j++)
       {
            printf(" ");
       }
       for(int k=1;k<=2*i-1;k++)
       {
          printf("* ");
       }
       printf("\n");
    }
    for(int i=row-1;i>=1;i--)
    {
       for(int j=0;j<2*row-2*i;j++)
       {
            printf(" ");
       }
       for(int k=1;k<=2*i-1;k++)
       {
          printf("* ");
       }
       printf("\n");
    }
    return 0;
  }