#include <stdio.h>
int main()
{
    int i,j,rows;
    scanf("%d",&rows);
         for (i=1;i<=rows;i++) 
    {
        for (s=1;s<=rows-i; s++){
            printf("");
        }
            for (j=1;j<=i;j++)
            {
                printf("* ");
            }
        printf("\n");
    }
    return 0;
}