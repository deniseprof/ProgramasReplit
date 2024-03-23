#include <stdio.h>

int main() {
    int num1, num2;
    float average;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    average = (float)(num1 + num2) / 2;

    printf("Average of %d and %d is %.2f\n", num1, num2, average);

    return 0;
}