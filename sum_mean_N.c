#include <stdio.h>

int main() {
    int n;
    int sum = 0;

    printf("Enter how many number's sum and mean you want : ");
    scanf("%d", &n);

    for(int j = 1 ; j <= n ; j++){
    sum += j;
    }
  
    float mean = sum / n ;   

    printf("Sum of %d numbers = %d\n",n,sum);
    printf("Mean of %d numbers = %f\n",n, mean);    //if user enter n = 5 then output of sum is 15 & mean is 3

    return 0;
}
