#include <stdio.h>

int main() {
    int num;
    int sum = 0;

    for (int i = 1; i <= 10; i++) {
        printf("Enter Number %d: ", i);
        scanf("%d", &num);
    }
  
    for(int j = 1 ; j <= 10 ; j++){
    sum += j;
    }
  
    float mean = sum / 10.0;   

    printf("Sum of 10 numbers = %d\n", sum);              
    printf("Mean of 10 numbers = %f\n", mean);

    return 0;
}
