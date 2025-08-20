#include <stdio.h>
#include <math.h>

int main()
{
    float raio;
    float area;
    float pi = 3.14;
    printf("Qual o raio do círculo? ");
    scanf("%f", &raio);
    area = pi * (raio * raio);
    
    printf("Um círculo com raio %f tem área igual a %.2f.", raio, area);
    return 0;
}
