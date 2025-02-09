#include <stdio.h>
int main()
{
    float a,b;
    scanf("%f %f",&a,&b);
    if (a == b*b) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
    return 0;
}