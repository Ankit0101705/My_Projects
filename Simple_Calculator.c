#include <stdio.h>
int main()
{
    int choice;
    float num1, num2, result;

    printf("Simple Calculator\n");
    printf("1.  Addition\n");
    printf("2.  Subtraction\n");
    printf("3.  Multiplication\n");
    printf("4.  Division\n");
    printf("5.  Exit\n");

    while (1)
    {
        printf("\n->  Enter Your Choice: ");
        scanf("%d", &choice);

        if (choice == 5)
        {
            break;
        }
        printf("Enter 1st Number: ");
        scanf("%f", &num1);

        printf("Enter 2nd Number: ");
        scanf("%f", &num2);

        switch (choice)
        {
        case 1:
            result = num1 + num2;
            printf("%.2f + %.2f = %.2f\n", num1, num2, result);
            break;

        case 2:
            result = num1 - num2;
            printf("%.2f - %.2f = %.2f\n", num1, num2, result);
            break;
        case 3:
            result = num1 * num2;
            printf("%.2f * %.2f = %.2f", num1, num2, result);
            break;

        case 4:
            if (num2 != 0)
            {
                result = num1 / num2;
                printf("%.2f / %.2f = %.2f", num1, num2, result);
            }
            else
            {
                printf("Error! Division by Zero is Not Allowed.\n");
            }
            break;

        default:
            printf("Invalid Choice. Please Choose a Valid Option.\n");
        }
    }
    return 0;
}