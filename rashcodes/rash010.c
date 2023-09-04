#include<stdio.h>
main()
{
    float f, c;
    printf("\nenter temperature in Fahrenheit: ");
    scanf("%f", &f);
    c=(f-32)/1.8;
    printf("\nTemperature in celsius: %.2f", c);
}
