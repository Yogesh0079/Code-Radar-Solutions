#include <stdio.h>
int main()
{
    char name[50];
    scanf("%s",name);
    int age;
    scanf("%d\n",&age);
    char hobby[50];
    scanf("%s",hobby);
    printf("Name: %s\n",name);
    printf("Age: %d\n",age);
    printf("Hobby: %s\n",hobby);
    return 0;
}