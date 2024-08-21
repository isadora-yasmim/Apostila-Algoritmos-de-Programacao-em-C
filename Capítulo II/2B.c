/*Conversão de decimal pra binário*/
/*21/8/24*/
#include <stdio.h>

void binario(int n){
    if (n==0){
        printf("%d", n);
    }else{
        binario (n/2);
        printf("%d", n%2);
    }
}

int main() {
    int n;
    printf("\nDigite o numero a ser convertido(0<=n<=255):");
    scanf("%d", &n);
    if (n<=0 || n>=255){
        printf("Numero invalido");
    }
    binario (n);
    
    return 0;
}