/*Distância entre dois pontos*/
/*21/8/24*/
#include <stdio.h>
#include <math.h>

int main() {
    int  x, y, z, w;
    float d;
    printf("\nDigite o X de A:");
    scanf("%d", &x);
    printf("\nDigite o Y de A:");
    scanf("%d", &y);
    printf("\nDigite o X de B:");
    scanf("%d", &z);
    printf("\nDigite o Y de B:");
    scanf("%d", &w);
    d=(z-x)*(z-x)+(w-y)*(w-y);
    d= sqrt(d);
    printf("%.2f", d);
    return 0;
}