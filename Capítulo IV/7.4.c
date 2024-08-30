// E7.4-Valor em notas e moedas
/*30/8/24*/
#include <stdio.h>

int main() {
    int v, x, y, z, w;
    printf("\nDigite o numero a ser convertido em valores de notas de 100,50,10 e 1:");
    scanf("%d", &v);
    x = v/100;
    y = (v-100*x)/50;
    z = (v-100*x-50*y)/10;
    w = v-100*x-50*y-10*z;
    printf("\nNOTAS DE 100 = %d",x);
    printf("\nNOTAS DE 100 = %d",y);
    printf("\nNOTAS DE 100 = %d",z);
    printf("\nNOTAS DE 100 = %d",w);
    
    return 0;
}