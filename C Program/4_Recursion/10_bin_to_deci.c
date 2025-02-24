#include <stdio.h>
#include <math.h>
int binary(long long n){
    int deci = 0, i = 0, r;

    while (n != 0) {
        r = n % 10;
        n /= 10;
        deci += r * pow(2, i);
        ++i;
    }
    return deci;
}

void main() {
    long long n;
    printf("Enter a binary number: ");
    scanf("%lld", &n);
    printf("Decimal number is: %d\n", binary(n));
}