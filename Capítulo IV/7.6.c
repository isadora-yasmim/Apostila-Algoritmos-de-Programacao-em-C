// 7.6-Reajuste salarial
/*30/8/24*/
#include <stdio.h>

int main() {
    float s, x;
    printf("\nDigite o salario a ser reajustado:");
    scanf("%f", &s);
    if (s>300.0){
        x=s*1.3;
    }else{
        x=s*1.5;
    }
    printf("SALARIO COM REAJUSTE = %.2f", x);
    
    return 0;
}