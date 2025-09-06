#include<stdio.h>

int main() {
    int n;

    printf("Enter how many natural numbers you want to print : ");    // taking input from user
    scanf("%d",&n);

    for(int i = 1 ; i < n ; i++){
        printf("%d\n",i);
    }

    return 0;                    
}
