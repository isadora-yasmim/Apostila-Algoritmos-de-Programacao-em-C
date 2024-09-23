// 7.1-Custo final de um carro
// 30/8/2024
#include <stdio.h>

int main() {
   float cf,pd,pi,z;
    printf("\nDigite o custo de fábrica do carro:");
    scanf("%f", &cf);
    printf("\nDigite a percentagem do distribuidor:");
    scanf("%f", &pd);
    printf("\nDigite o percentual de impostos:");
    scanf("%f", &pi);
    z=(pd*cf)/100+(pi*cf)/100+cf;
    printf("\nO CUSTO DO CARRO E = %.2F", z);

    return 0;
}