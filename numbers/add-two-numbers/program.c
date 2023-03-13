#include <stdio.h>

int main()
{
    int num1, num2, sum;
    printf("---------- Add two Numbers (Integer) --------\n");
    printf("Enter first numbers: ");
    scanf("%d", &num1);
    printf("Enter second numbers: ");
    scanf("%d", &num2);
    sum = num1 + num2;
    printf("The sum is: %d\n", sum);
    return 0;
}
