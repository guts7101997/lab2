#include <stdio.h>
#include <math.h>

int main()
{
    float cateto1;
    float cateto2;
    float hipot;
    printf("Diga o valor do primeiro cateto:");
    scanf("%f", &cateto1);
    
    printf("Diga o valor do segundo cateto: ");
    scanf("%f", &cateto2);
    hipot = sqrt((pow(cateto1,2) + pow(cateto2, 2)));
    
    printf("Um triângulo retângulo com lados %f e %f tem uma hipotenusa igual a %.2f.",cateto1, cateto2, hipot);
    
    return 0;
}
