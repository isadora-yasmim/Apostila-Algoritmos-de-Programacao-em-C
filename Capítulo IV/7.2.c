// 7.2-Distância entre dois pontos
#include <stdio.h>
#include <math.h>

int main() {
   float x1,x2,y1,y2, X;
    printf("\nDigite a coordenada x do primeiro ponto:");
    scanf("%f", &x1);
    printf("\nDigite a coordenada y do primeiro ponto:");
    scanf("%f", &y1);
    printf("\nDigite a coordenada x do segundo ponto:");
    scanf("%f", &x2);
    printf("\nDigite a coordenada y do primeiro ponto:");
    scanf("%f", &y2);
    X=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    printf("\nA DISTANCIA ENTRE A e B = %.2F", X);

    return 0;
}