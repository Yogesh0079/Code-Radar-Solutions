#include <stdio.h>
int main()
{
    int a,b,i;
    scanf("%d %d",&a,&b);
    i = a >> b;
    printf("%d\n", i);
    return 0;
}