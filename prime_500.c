#include <stdio.h>

int main() {
    int isPrime;

    for (int i = 2; i <= 500; i++) {  
        isPrime = 1; 

        for (int j = 2; j <= i / 2; j++) { 
            if (i % j == 0) {
                isPrime = 0;  
                break;
            }
        }

        if (isPrime) {
            printf("%d ", i);
        }
    }

    return 0;
}
