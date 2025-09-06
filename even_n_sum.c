#include <stdio.h>

int main() {
    int a, sum = 0;

    printf("Enter how many even number's sum you want : ");
    scanf("%d", &a);

    for (int i = 1; i <= a; i++) {
        sum += 2 * i - 1;  
    }

    printf("Sum of first %d even numbers is %d.\n", a, sum);  //if user input 2 then output is 6

    return 0;
}
