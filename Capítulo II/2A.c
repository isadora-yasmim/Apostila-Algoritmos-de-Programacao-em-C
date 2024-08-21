/*Custo final de um carro*/
/*21/8/24*/
#include <stdio.h>

int main() {
    float v, x, y, z;
    printf("\nDigite o valor de fábrica do carro:");
    scanf("%f", &v);
    printf("\nDigite o percentual do distribuidor:");
    scanf("%f", &x);
    printf("\nDigite o percentual de impostos:");
    scanf("%f", &y);
    z= v+(x/100*v)+(y/100*v);
    printf("\nO valor do carro e:%.2f", z);
    return 0;
}
