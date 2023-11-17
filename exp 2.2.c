#include <stdio.h>

int main() {
    int num1, num2, temp;
    printf("Enter two numbers:\n");
    scanf("%d %d", &num1, &num2);
    num1 = num2;
    num2 = temp;
    printf("After swapping:\n");
    printf("First number: %d\n", num1);
    printf("Second number: %d\n", num2);

    return 0;
}

int main2() {
    int num1, num2;
    printf("Enter two numbers:\n");
    scanf("%d %d", &num1, &num2);
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
    printf("After swapping:\n");
    printf("First number: %d\n", num1);
    printf("Second number: %d\n", num2);

    return 0;
}