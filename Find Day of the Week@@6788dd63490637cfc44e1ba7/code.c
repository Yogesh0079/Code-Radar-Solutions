#include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    switch (a)
    {
        case 1:
        printf("Monday\n");
        break;
        case 2:
        printf("Tuesday\n");
        break;
        case 3:
        printf("Wednasday\n");
        break;
        case 4:
        printf("Thursday\n");
        break;
        case 5:
        printf("Friday\n");
        break;
        case 6:
        printf("Satuarday\n");
        case 7:
        printf("Sunday\n");
        default:
        printf("Invalid\n");
    }
    return 0;
}