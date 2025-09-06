#include <stdio.h>

int main() {
    int num; 
    int rev = 0; 
     int digit;
    

    printf("Enter a number: ");
    scanf("%d", &num);


    if (num < 0) {
        num = -num;
    }

    while (num > 0) {
        digit = num % 10;     
        rev = rev * 10 + digit; 
        num = num / 10;       
    }

    printf("Reversed number = %d\n", rev);

    return 0;
}
