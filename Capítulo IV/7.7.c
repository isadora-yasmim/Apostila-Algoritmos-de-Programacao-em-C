// 7.7-Soma dos 3 menores valores
/*30/8/24*/
#include <stdio.h>

int main() {
    int v1,v2,v3,v4, maior, soma;
    printf("\nDigite o primeiro valor:");
    scanf("%d", &v1);
    printf("\nDigite o segundo valor:");
    scanf("%d", &v2);
    printf("\nDigite o terceiro valor:");
    scanf("%d", &v3);
    printf("\nDigite o quarto valor:");
    scanf("%d", &v4);
    soma= v1+v2+v3+v4;
    if (v1>=v2 && v1>= v3 && v1>=v4){
        maior= v1;
    }
    if (v2>=v1 && v2>= v3 && v2>=v4){
        maior= v2;
    }
    if (v3>=v2 && v3>= v1 && v3>=v4){
        maior= v3;
    }
    if (v4>=v2 && v4>= v3 && v4>=v1){
        maior= v4;
    }
    printf("%d", soma- maior);
    
    return 0;
}