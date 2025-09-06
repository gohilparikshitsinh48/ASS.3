#include <stdio.h>

int main() {
    int code;
    int boys = 0, girls = 0;

    printf("Enter sex code for 50 students (1 = Boy, 2 = Girl):\n");

    for (int i = 1; i <= 50; i++) {
        printf("Student %d: ", i);
        scanf("%d", &code);

        if (code == 1) {
            boys++;
        } else if (code == 2) {
            girls++;
        } else {
            printf("Invalid code! Please enter 1 or 2 only.\n");
            i--; 
        }
    }

    printf("Total boys = %d\n", boys);
    printf("Total girls = %d\n", girls);

    return 0;
}
