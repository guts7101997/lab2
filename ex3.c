#include <stdio.h>

int main()
{
    float tempC;
    float tempF;
    
    printf("Digite a temperatura em Celsius(C): ");
    scanf("%f", &tempC);
    
    tempF = (1.8 * tempC) + 32;
    printf("Uma temperatura de %.2f graus Celsius equivale a %.2f graus Fahrenheit.",tempC, tempF);
    return 0;
}
