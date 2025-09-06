#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter how many odd number's sum you want : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum += 2 * i - 1;  
    }

    printf("Sum of first %d odd numbers is %d.\n", n, sum);   //if user input 2 output is 4

    return 0;
}
