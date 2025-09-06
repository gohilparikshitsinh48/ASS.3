#include <stdio.h>

int main() {
    int n;
    int sum = 0;

    printf("Enter how many nautral number's sum you want : ");
    scanf("%d", &n);

    for(int i = 1 ; i <= n ; i++){
     sum += i;
 }
   printf("Sum of n natural number is %d.\n",sum);   
    return 0;
}
