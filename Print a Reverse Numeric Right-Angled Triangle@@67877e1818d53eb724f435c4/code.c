#include <stdio.h>
int main()
{
    int i,j,num;
    scanf("%d",&num);
    for (i=num;i>=1;i--){
        for (j=1;j<=i;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}