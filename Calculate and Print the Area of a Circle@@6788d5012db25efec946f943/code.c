#include <stdio.h>
#define Pi 3.14
int main()
{
    float radius, area;
    scanf("%f",&radius);
    area = Pi * radius * radius;
    printf("Area: %.2f\n", area);
    
    return 0;
}