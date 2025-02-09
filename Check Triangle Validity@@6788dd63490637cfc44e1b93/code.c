#include <stdio.h>

int isValidTriangle(int a, int b, int c) {
    return (a + b > c) && (a + c > b) && (b + c > a);
}

int main() {
    int side1, side2, side3;
    scanf("%d %d %d", &side1, &side2, &side3);
    if (isValidTriangle(side1, side2, side3)) {
        printf("Valid\n", side1, side2, side3);
    } else {
        printf("Invalid\n", side1, side2, side3);
    }
    return 0;
}
