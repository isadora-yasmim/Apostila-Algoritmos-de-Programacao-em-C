// 7.5-Notas e conceitos
/*30/8/24*/
#include <stdio.h>

int main() {
    float x;
    char y;
    printf("\nDigite a nota a ser convertida em conceito:");
    scanf("%f", &x);
    if ((x<0.0)||(x>10.0)){
        printf("A NOTA %f E INVALIDA", x);
    }
    if ((x>=9.0)){
        printf("\nNOTA = %.1f", x);
        printf("\nCONCEITO = A") ;
    }
    if ((x>=7.5)&&(x<=8.9)){
        printf("\nNOTA = %.1f", x);
        printf("\nCONCEITO = B") ;
    }
    if ((x>=6.0)&&(x<=7.4)){
        printf("\nNOTA = %.1f", x);
        printf("\nCONCEITO = C") ;
    }else{
        printf("\nNOTA = %.1f", x);
        printf("\nCONCEITO = D") ;
    }
    
    return 0;
}