#include <stdio.h>
//May 9th, 2024, Gwonjin Lee
//This Program shows the chart of Celsius to Fahrenheit from 0 to 100 degrees, 
//and shows the chart of Fahrenheit to Celsius from 32 to 212 degrees.

float celsius(float temp);
float fahrenheit(float temp);

int main() 
{
    printf("Celsius to Fahrenheit:\n");
    printf("Celsius Fahrenheit\n");
    for (int celsiusTemp = 0; celsiusTemp <= 100; celsiusTemp++) 
    {
        printf("%3d%15.2f\n", celsiusTemp, celsius(celsiusTemp));
    }

    printf("\nFahrenheit to Celsius:\n");
    printf("Fahrenheit Celsius\n");
    for (int fahrenheitTemp = 32; fahrenheitTemp <= 212; fahrenheitTemp++) 
    {
        printf("%3d%15.2f\n", fahrenheitTemp, fahrenheit(fahrenheitTemp));
    }

    return 0;
}

float celsius(float temp) 
{
    return (temp - 32) * 5.0 / 9.0;
}

float fahrenheit(float temp) 
{
    return (temp * 9.0 / 5.0) + 32;
}
