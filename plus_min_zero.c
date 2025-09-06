#include <stdio.h>

int main() {
    int n;
    int positive = 0, negative = 0, zero = 0;

    printf("Enter 200 numbers:\n");

    for (int i = 1; i <= 200; i++) {
        scanf("%d", &n);

        if (n > 0) {
            positive++;
        } else if (n < 0) {
            negative++;
        } else {
            zero++;
        }
    }

    printf("Count of positive numbers = %d\n", positive);
    printf("Count of negative numbers = %d\n", negative);
    printf("Count of zeros = %d\n", zero);

    return 0;
}
