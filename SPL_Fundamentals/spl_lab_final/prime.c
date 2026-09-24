#include <stdio.h>
int main() {
    int n, i, isPrime = 1;

    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 2; i < n; i++) {
        if (n % i == 0) {
            isPrime = 0;
        }
    }

    if (n < 2)
        isPrime = 0;

    if (isPrime)
        printf("%d is prime\n", n);
    else
        printf("%d is not prime\n", n);

    return 0;
}
