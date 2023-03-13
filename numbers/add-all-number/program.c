#include <stdio.h>

int main()
{
    int is_run = 1;
    int total = 0;
    printf("\n\n");
    printf("---------- Add all Numbers Provide (Integer) --------\n");
    printf("\n\n");
    while (is_run)
    {
        int input;
        printf("Enter the number:");
        scanf("%d", &input);

        if (input == -1)
            break;

        total += input;
        printf("- Total is: %d \n", total);
    }
    printf("\n\n");
    printf("---------- Program Stopped --------\n");
    printf("Total is: %d  \n", total);
    printf("\n\n");
    return 0;
}