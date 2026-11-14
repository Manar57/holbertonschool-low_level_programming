
#include <stdio.h>

/**
 * display_menu - Displays the calculator menu
 *
 * Return: Nothing
 */
void display_menu(void)
{
    printf("\nSimple Calculator\n");
    printf("1) Add\n");
    printf("2) Subtract\n");
    printf("3) Multiply\n");
    printf("4) Divide\n");
    printf("0) Quit\n");
    printf("Choice: ");
}

/**
 * calculate - Performs the selected arithmetic operation
 * @num1: First operand
 * @num2: Second operand
 * @choice: Selected operation
 *
 * Return: Calculation result
 */
double calculate(double num1, double num2, int choice)
{
    switch (choice)
    {
        case 1:
            return (num1 + num2);
        case 2:
            return (num1 - num2);
        case 3:
            return (num1 * num2);
        case 4:
            return (num1 / num2);
        default:
            return (0);
    }
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int choice = -1;
    double num1, num2;
    double result;

    printf("Welcome to Simple Calculator!\n");

    while (choice != 0)
    {
        display_menu();

        if (scanf("%d", &choice) != 1)
        {
            printf("Invalid input.\n");
            return (1);
        }

        if (choice < 0 || choice > 4)
        {
            printf("Invalid choice\n");
        }
        else if (choice == 0)
        {
            printf("Bye!\n");
        }
        else
        {
            printf("A: ");
            if (scanf("%lf", &num1) != 1)
            {
                printf("Invalid number.\n");
                return (1);
            }

            printf("B: ");
            if (scanf("%lf", &num2) != 1)
            {
                printf("Invalid number.\n");
                return (1);
            }

            if (choice == 4 && num2 == 0)
            {
                printf("Error: division by zero\n");
            }
            else
            {
                result = calculate(num1, num2, choice);
                printf("Result: %.15g\n", result);
            }
        }
    }

    return (0);
}
