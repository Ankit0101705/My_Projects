#include <stdio.h>
#include <math.h>
#define M_PI 3.14

int factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}

int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b)
{
    return (a * b) / gcd(a, b);
}

int main()
{
    int choice;
    double num1, num2, result;
    int num3, num4;

    printf("Comprehensive Calculator\n");
    printf("1. Basic Operations\n");
    printf("2. Trigonometric Operations\n");
    printf("3. Exponential Operations\n");
    printf("4. Logarithmic Operations\n");
    printf("5. Square Root\n");
    printf("6. Factorial\n");
    printf("7. GCD\n");
    printf("8. LCM\n");
    printf("9. Exit\n");

    while (1)
    {
        printf("\nEnter Your Choice: ");
        scanf("%d", &choice);

        if (choice == 9)
        {
            printf("Exiting the Program. Goodbye!\n");
            break;
        }
        switch (choice)
        {
        case 1:
            printf("\nBasic Operations\n");
            printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
            int basicChoice;
            printf("Enter your Choice: ");
            scanf("%d", &basicChoice);

            printf("Enter 1st Number: ");
            scanf("%lf", &num1);
            printf("Enter 2nd Number: ");
            scanf("%lf", &num2);

            switch (basicChoice)
            {
            case 1:
                result = num1 + num2;
                printf("%.2lf + %.2lf = %.2lf\n", num1, num2, result);
                break;
            case 2:
                result = num1 - num2;
                printf("%.2lf - %.2lf = %.2lf\n", num1, num2, result);
                break;
            case 3:
                result = num1 * num2;
                printf("%.2lf * %.2lf = %.2lf\n", num1, num2, result);
                break;
            case 4:
                if (num2 != 0)
                {
                    result = num1 / num2;
                    printf("%.2lf / %.2lf = %.2lf\n", num1, num2, result);
                }
                else
                {
                    printf("Error! Division by Zero is not allowed.\n");
                }
                break;
            default:
                printf("Invalid Choice.\n");
                break;
            }
            break;
        case 2:
            printf("\nTrigonometric Operations\n");
            printf("1. Sine\n2. Cosine\n3. Tangent\n");
            int trigChoice;
            printf("Enter Your Choice: ");
            scanf("%d", &trigChoice);

            printf("Enter Angle in Degrees: ");
            scanf("%lf", &num1);

            switch (trigChoice)
            {
            case 1:
                result = sin(num1 * M_PI / 180);
                if (result == 0.5)
                    printf("sin(%.2lf) = 1/2\n", num1);
                else
                    printf("sin(%.2lf) = %.2lf\n", num1, result);
                break;
            case 2:
                result = cos(num1 * M_PI / 180);
                if (result == 0.5)
                    printf("cos(%.2lf) = 1/2\n", num1);
                else
                    printf("cos(%.2lf) = %.2lf\n", num1, result);
                break;
            case 3:
                result = tan(num1 * M_PI / 180);
                if (result == 0.5)
                    printf("tan(%.2lf) = 1/2\n", num1);
                else
                    printf("tan(%.2lf) = %.2lf\n", num1, result);
                break;
            default:
                printf("Invalid Choice.\n");
                break;
            }

        case 3:
            printf("\nExponential Operations\n");
            printf("Enter Base: ");
            scanf("%lf", &num1);
            printf("Enter Exponent: ");
            scanf("%lf", &num2);
            result = pow(num1, num2);
            printf("%.2lf ^ %.2lf = %.2lf\n", num1, num2, result);
            break;
        case 4:
            printf("\nLogarithmic Operations\n");
            printf("1. Natural Logarithm\n2. Base-10 Logarithm\n");
            int logChoice;
            printf("Enter Your Choice: ");
            scanf("%d", &logChoice);

            printf("Enter Number: ");
            scanf("%lf", &num1);

            if (num1 > 0)
            {
                switch (logChoice)
                {
                case 1:
                    result = log(num1);
                    printf("ln(%.2lf) = %.2lf\n", num1, result);
                    break;
                case 2:
                    result = log10(num1);
                    printf("log10(%.2lf) = %.2lf\n", num1, result);
                    break;
                default:
                    printf("Invalid Choice.\n");
                    break;
                }
            }
            else
            {
                printf("Error! Logarithm is undefined for non-positive values.\n");
            }
            break;
        case 5:
            printf("\nSquare Root\n");
            printf("Enter Number: ");
            scanf("%lf", &num1);
            if (num1 >= 0)
            {
                result = sqrt(num1);
                printf("sqrt(%.2lf) = %.2lf\n", num1, result);
            }
            else
            {
                printf("Error! Square Root of Negative Numbers is Undefined.\n");
            }
            break;
        case 6:
            printf("\nFactorial\n");
            printf("Enter an Integer: ");
            scanf("%d", &num3);
            if (num3 >= 0)
            {
                printf("%d! = %d\n", num3, factorial(num3));
            }
            else
            {
                printf("Error! Factorial is Undefined for Negative Integers.\n");
            }
            break;
        case 7:
            printf("\nGCD\n");
            printf("Enter Two Integers: ");
            scanf("%d %d", &num3, &num4);
            printf("GCD(%d, %d) = %d\n", num3, num4, gcd(num3, num4));
            break;
        case 8:
            printf("\nLCM\n");
            printf("Enter Two Integers: ");
            scanf("%d %d", &num3, &num4);
            printf("LCM(%d, %d) = %d\n", num3, num4, lcm(num3, num4));
            break;
        default:
            printf("Invalid Choice. Please Try Again.\n");
            break;
        }
    }

    return 0;
}
