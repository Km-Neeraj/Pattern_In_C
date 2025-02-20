#include<stdio.h>
int main()
{
    int row;
    printf("Enter the number of row\n");
    scanf("%d",&row);
    for(int i=1;i<=2*row-1;i++)
    {
        for(int j=1;j<=2*row-2;j++)
        {
           if(i==1||j==1||i==2*row-1||j==2*row-2||i==j||j==(2*row-2)-i+1)
           {
              printf(" * ");
           }
           else
           {
              printf("   ");
           }
        }
        printf("\n");
    }
    return 0;
}

  /*        *  *  *  *  *  *  *  * 
            *  *              *  * 
            *     *        *     * 
            *        *  *        * 
            *        *  *        * 
            *     *        *     * 
            *  *              *  * 
            *                    * 
            *  *  *  *  *  *  *  *        (HollowStarWithDiagonal)*/