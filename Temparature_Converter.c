#include <stdio.h>

void celciusToFahrenheitAndKelvin(float celsius)
{
    float fahrenheit = (celsius * 9 / 5) + 32;
    float kelvin = celsius + 273.15;
    printf("Fahrenheit: %.2f'F\n", fahrenheit);
    printf("Lelvin: %.2fk\n", kelvin);
}

void fahrenheitToCelsiusAndKelvin(float fahrenheit)
{
    float celsius = (fahrenheit - 32) * 5 / 9;
    float kelvin = celsius + 273.15;
    printf("Celsius: %.2f'C\n", celsius);
    printf("Kelvin: %.2fK\n", kelvin);
}

void kelvinToCelsiusAndFahrenheit(float kelvin)
{
    float celsius = kelvin - 273.15;
    float fahrenheit = (celsius * 9 / 5) + 32;
    printf("Celsius: %.2f'C\n", celsius);
    printf("Fahrenheit: %.2f'F\n", fahrenheit);
}

int main()
{
    int choice;
    float temperature;

    printf("Temperature Converter\n");
    printf("1. Celsius to Fahrenheit and Kelvin\n");
    printf("2. Fahrenheit to Celsius and Kelvin\n");
    printf("3. Kelvin to Celsius and Fahrenheit\n");
    printf("Enter Your Choice (1-3): ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Enter Temperature in Celsius: ");
        scanf("%f", &temperature);
        celciusToFahrenheitAndKelvin(temperature);
        break;
    case 2:
        printf("Enter Temperature in Fahrenheit: ");
        scanf("%f", &temperature);
        fahrenheitToCelsiusAndKelvin(temperature);
        break;
    case 3:
        printf("Enter Temperature in kelvin: ");
        scanf("%f", &temperature);
        kelvinToCelsiusAndFahrenheit(temperature);
        break;
    default:
        printf("Invalid Choice. Please Select 1, 2, or 3.\n");
    }
    return 0;
}
