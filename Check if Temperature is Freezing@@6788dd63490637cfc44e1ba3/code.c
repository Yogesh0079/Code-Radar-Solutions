#include <stdio.h>
int main()
{
    int temp;
    scanf("%d",&temp);
    if (temp > 0) {
        printf("Above Freezing\n");
    } else {
        printf("Freezing\n");
    }
    return 0;
}