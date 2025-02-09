#include <stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(isvalidtriangle(a,b,c)) {
    printf("Valid\n");
    } else {
    printf("Invalid\n");
    }
    return 0;
}