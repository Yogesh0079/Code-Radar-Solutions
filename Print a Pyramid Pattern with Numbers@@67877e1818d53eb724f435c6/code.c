#include <stdio.h>
int main()
{
    int i,j,num;
    scanf("%d",&num);
    for (i=1;i<=num;i++){
        for (j=1;j<=num-i;j++){
            printf(" ");
        }
        for (int k=1;k=2*i-1;k++){
            printf("%d",num);
        }
        printf("\n");
    }
    return 0;
}