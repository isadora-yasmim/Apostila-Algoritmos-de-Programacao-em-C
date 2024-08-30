//corrigir
// 7.7-Soma dos 3 menores valores
/*30/8/24*/
#include <stdio.h>

int main() {
    int v1,v2,v3,v4, m1,m2,m3,sm;
    printf("\nDigite o primeiro valor:");
    scanf("%d", &v1);
    printf("\nDigite o segundo valor:");
    scanf("%d", &v2);
    printf("\nDigite o terceiro valor:");
    scanf("%d", &v3);
    printf("\nDigite o quarto valor:");
    scanf("%d", &v4);
    if (v1>v2){
        m1=v2;
    }else{
        m1=v1;
    }
    if (v1>v3){
        m2=v3;
    }else{
        m2=v1;
    }
    if(v2>v3){
        m3=v3;
    }else{
        m3=v2;
    }
    if (v4<m1){
        m1=v4;
    }
    if (v4<m2){
        m2=v4;
    }
    if (v4<m3){
        m3=v4;
    }
    sm=m1+m2+m3;
    printf("%d", sm);
    
    return 0;
}