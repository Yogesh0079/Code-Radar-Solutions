#include <stdio.h>
int main()
{
    char a;
    scanf("%ch", &a);
    if (isupper(a))
    printf("Uppercase");
    else
    printf("Lowercase");
    return 0;
}