#include <stdio.h>

int main()
{
    int num1;
    int num2;
    int soma;
    int divi;
    int mult;
    int sub;
    printf("Digite o prímeiro número: ");
    scanf("%d", &num1);
    
    printf("Digite o segundo número: ");
    scanf("%d", &num2);
    
    soma = num1 + num2;
    divi = num1 / num2;
    mult = num1 * num2;
    sub = num1 - num2;
    printf("A soma dos dois números é %d, a subtração dos dois é %d, a multiplicação é %d e a divisão é %d", soma, sub, mult, divi);

    return 0;
}
