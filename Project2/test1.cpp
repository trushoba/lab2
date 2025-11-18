#include <stdio.h>

int main() {
    int number;

    printf("¬ведите число: ");
    scanf("%d", &number);

    if (number % 2 == 0) {
        printf("„исло чЄтное\n");
    }
    else {
        printf("„исло нечЄтное\n");
    }

    return 0;
}