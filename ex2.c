#include <stdio.h>
#include <math.h>

int main()
{
    float peso;
    float altura;
    float imc;
    printf("Diga seu peso em quilogramas(kg): ");
    scanf("%f", &peso);
    
    printf("Diga sua altura em metros(m): ");
    scanf("%f", &altura);
    imc = peso / pow(altura, 2);
    printf("O IMC de uma pessoa com peso %.2f kg e altura %.2f m é igual a %.2f.", peso, altura, imc);
    
    return 0;
}
