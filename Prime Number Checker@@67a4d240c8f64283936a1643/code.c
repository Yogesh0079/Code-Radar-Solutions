#include <stdio.h>
#include <math.h>

int isPrime(int n) {
    if (n <= 1) {
        return 0; // Not prime
    }
    if (n <= 3) {
        return 1; // 2 and 3 are prime
    }
    if (n % 2 == 0 || n % 3 == 0) {
        return 0; // Check divisibility by 2 and 3
    }
    for (int i = 5; i * i <= n; i = i + 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return 0; // Not prime
        }
    }
    return 1; // Prime
}
