//7.9-Somatóro simples

#include <stdio.h>

int main()
{
    int n, i;
    float s, x;
    s=0.0;
    printf("\nDigite um número :");
    scanf("\n%d",&n);
   /** while (n<1){
        printf("\nNumero invalido");
        printf("\nDigite um novo número :");
        scanf("\n%d",&n);
    }**/
    
    for(i=0; i<n; i++){
        x=1/i;
        s+= x;
    }
    
    printf("\n%f",s );
    
    

    return 0;
}