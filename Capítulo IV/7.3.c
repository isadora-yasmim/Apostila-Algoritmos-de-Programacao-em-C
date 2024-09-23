// 7.3-Numero invertido
// 30/8/2024
#include <stdio.h>
#include <math.h>



int main() {
   int x, inv;
   inv=0;
    printf("\nDigite o numero a ser invertido:");
    scanf("%d", &x);
    if ((x==0)|| (x%10==0) || (x%100==0) || (x>=1000) || (x<=99)){
        printf("\nO NUMERO %d E INVALIDO ", x);
    }
    while (x> 0){
        inv= (10*inv)+ (x%10);
        x/=10;
    }
    
    printf("%d", inv);
    return 0;
}

/*int inverte(int y) {
    int inv = 0;
    while (y> 0){
        inv= 10* inv+ y%10;
        y/=10;
    }
    return inv;
}*/