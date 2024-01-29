#include<stdio.h>
#include<ctype.h>

float input;
float output;
void tempConverter(int start, int conv);
void currConverter(int start, int conv);
void massConverter(int start, int conv);

int main()
{
    char typevalue;
    int startunit;
    int convunit;
    
    printf("Welcome to the PROJECT UNIT CONVERTER\n");
    printf("Here you can convert some of the units in mass, temperature, and currency\n");
    printf("\n");
    printf("Mass: M\nTemperature: T\nCurrency: C\n");
    printf("Select the type of value: ");
    scanf("%c", &typevalue);
    if (islower(typevalue))
    {
        typevalue = toupper(typevalue);
    }
    printf("\n");

    if (typevalue == 'T')
    {
        printf("Enter 1 for Celsius, 2 for Fahrenheit, 3 for Kelvin\n");
        printf("Enter your starting unit: ");
        scanf("%d", &startunit);
        printf("Enter your convert unit: ");
        scanf("%d", &convunit);
        printf("\n");
        tempConverter(startunit, convunit);
    }
    else if (typevalue == 'C')
    {
        printf("Enter 1 for USD, 2 for EUR, 3 for JPY\n");
        printf("Enter your starting unit: ");
        scanf("%d", &startunit);
        printf("Enter your convert unit: ");
        scanf("%d", &convunit);
        printf("\n");
        currConverter(startunit, convunit);
    }
    else if (typevalue == 'M')
    {
        printf("Enter 1 for kilorgram(kg), 2 for ounces(oz), 3 for pounds(lbs)\n");
        printf("Enter your starting unit: ");
        scanf("%d", &startunit);
        printf("Enter your convert unit: ");
        scanf("%d", &convunit);
        printf("\n");
        massConverter(startunit, convunit);
    }
    else
    {
        printf("Please enter again\n");
    }
    return 0;
}

void tempConverter(int start, int conv)
{
    if ((start == 1) && (conv == 2))
    {
        printf("You are converting Celsius to Fahrenheit\n");
        printf("Enter your Celsius degree: ");
        scanf("%f", &input);
        output = input*1.8 + 32;
        printf("%.2f Celsius is %.2f Fahrenheit\n", input, output);
    }
    else if ((start == 2) && (conv == 1))
    {
        printf("You are converting Fahrenheit to Celsius\n");
        printf("Enter your Fahrenheit degree: ");
        scanf("%f", &input);
        output = (5/9)*(input - 32);
        printf("%.2f Fahrenheit is %.2f Celsius\n", input, output);
    }
    else if ((start == 1) && (conv == 3))
    {
        printf("You are converting Celsius to Kelvin\n");
        printf("Enter your Celsius degree: ");
        scanf("%f", &input);
        output = input + 273.15;
        printf("%.2f Celsius is %.2f Kelvin\n", input, output);
    }
    else if ((start == 3) && (conv == 1))
    {
        printf("You are converting Kelvin to Celsius\n");
        printf("Enter your Kelvin degree: ");
        scanf("%f", &input);
        output = input - 273.15;
        printf("%.2f Kelvin is %.2f Celsius\n", input, output);
    }
    else if ((start == 2) && (conv == 3))
    {
        printf("You are converting Fahrenheit to Kelvin\n");
        printf("Enter your Fahrenheit degree: ");
        scanf("%f", &input);
        output = (input - 32)*(5/9) + 273.15;
        printf("%.2f Fahrenheit is %.2f Kelvin\n", input, output);
    }
    else if ((start == 3) && (conv == 2))
    {
        printf("You are converting Kelvin to Fahrenheit\n");
        printf("Enter your Kelvin degree: ");
        scanf("%f", &input);
        output = (input - 273.15)*(9/5) + 32;
        printf("%.2f Kelvin is %.2f Fahrenheit\n", input, output);
    }
    else
    {
        printf("Please enter again\n");
    }
}

void currConverter(int start, int conv)
{
    if ((start == 1) && (conv == 2))
    {
        printf("You are converting USD to EUR\n");
        printf("Enter your USD: ");
        scanf("%f", &input);
        output = input*0.92;
        printf("%.2f USD is %.2f EUR\n", input, output);
        printf("Note: These conversions are based on the exchange rate as of 01/2024\n");
    }
    else if ((start == 2) && (conv == 1))
    {
        printf("You are converting EUR to USD\n");
        printf("Enter your EUR: ");
        scanf("%f", &input);
        output = input*1.08;
        printf("%.2f EUR is %.2f USD\n", input, output);
        printf("Note: These conversions are based on the exchange rate as of 01/2024\n");
    }
    else if ((start == 1) && (conv == 3))
    {
        printf("You are converting USD to JPY\n");
        printf("Enter your USD: ");
        scanf("%f", &input);
        output = input*148.15;
        printf("%.2f USD is %.2f JPY\n", input, output);
        printf("Note: These conversions are based on the exchange rate as of 01/2024\n");
    }
    else if ((start == 3) && (conv == 1))
    {
        printf("You are converting JPY to USD\n");
        printf("Enter your JPY: ");
        scanf("%f", &input);
        output = input*0.0068;
        printf("%.2f JPY is %.2f USD\n", input, output);
        printf("Note: These conversions are based on the exchange rate as of 01/2024\n");
    }
    else if ((start == 2) && (conv == 3))
    {
        printf("You are converting EUR to JPY\n");
        printf("Enter your EUR: ");
        scanf("%f", &input);
        output = input*160.62;
        printf("%.2f EUR is %.2f JPY\n", input, output);
        printf("Note: These conversions are based on the exchange rate as of 01/2024\n");
    }
    else if ((start == 3) && (conv == 2))
    {
        printf("You are converting JPY to EUR\n");
        printf("Enter your JPY: ");
        scanf("%f", &input);
        output = input*0.0062;
        printf("%.2f JPY is %.2f EUR\n", input, output);
        printf("Note: These conversions are based on the exchange rate as of 01/2024\n");
    }
    else
    {
        printf("Please enter again\n");
    }
}

void massConverter(int start, int conv)
{
    if ((start == 1) && (conv == 2))
    {
        printf("You are converting kilogram(kg) to ounces(oz)\n");
        printf("Enter your kilogram amount: ");
        scanf("%f", &input);
        output = input*35.27;
        printf("%.2f kg is %.2f oz\n", input, output);
    }
    else if ((start == 2) && (conv == 1))
    {
        printf("You are converting ounces(oz) to kilogram(kg)\n");
        printf("Enter your ounces amount: ");
        scanf("%f", &input);
        output = input*0.03;
        printf("%.2f oz is %.2f kg\n", input, output);
    }
    else if ((start == 1) && (conv == 3))
    {
        printf("You are converting kilogram(kg) to pounds(lbs)\n");
        printf("Enter your kilogram amount: ");
        scanf("%f", &input);
        output = input*2.2;
        printf("%.2f kg is %.2f lbs\n", input, output);
    }
    else if ((start == 3) && (conv == 1))
    {
        printf("You are converting pounds(lbs) to kilogram(kg)\n");
        printf("Enter your pounds amount: ");
        scanf("%f", &input);
        output = input*0.45;
        printf("%.2f lbs is %.2f kg\n", input, output);
    }
    else if ((start == 2) && (conv == 3))
    {
        printf("You are converting ounces(oz) to pounds(lbs)\n");
        printf("Enter your ounces amount: ");
        scanf("%f", &input);
        output = input/16;
        printf("%.2f oz is %.2f lbs\n", input, output);
    }
    else if ((start == 3) && (conv == 2))
    {
        printf("You are converting pounds(lbs) to ounces(oz)\n");
        printf("Enter your pounds amount: ");
        scanf("%f", &input);
        output = input*16;
        printf("%.2f lbs is %.2f oz\n", input, output);
    }
    else
    {
        printf("Please enter again\n");
    }
}