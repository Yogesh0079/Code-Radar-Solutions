#include <stdio.h>
int main()
{
    int i,j,num;
    scanf("%d",&j);
    for (i=1;i<=num;i++){
        for (j=1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}