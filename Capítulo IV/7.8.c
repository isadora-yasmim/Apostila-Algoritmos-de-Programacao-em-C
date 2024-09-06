// 7.8-Ordem
/*30/8/24*/
#include <stdio.h>

int main()
{
    char a , b , c ;
    int x,y,z,menor,meio,maior;
    
    printf("\nAdicione os valores a serem ordenados:");
    scanf("\n%d%d%d", &a,&b,&c);
    printf("\nAdicione os valores a ordem represnetada por ABC:");
    scanf("\n%d%d%d", &x,&y,&z);
    //encontrar o menor elemento, o intermediario e o maior
    if (a<= b && a <= c){
        menor=a;
        if(b<=c){
            meio=b;
            maior=c;
        }else{
            meio= c;
            maior=b;
        }
    }else{
        if (b<= a && b <= c){
        menor=b;
        if(a<=c){
            meio=a;
            maior=c;
        }else{
            meio= c;
            maior=a;
        }
        }
        
    }else{
         if (c<= a && c <= b){
        menor=c;
        if(a<=b){
            meio=a;
            maior=b;
        }else{
            meio= b;
            maior=a;
        }
     }
    }
if (x=='A'){
    printf("%d", menor);
}
if (x=='B'){
    printf("%d", menor);
}
if (x=='C'){
    printf("%d", menor);
}
if (y=='A'){
    printf("%d", menor);
}
if (y=='B'){
    printf("%d", menor);
}
if (y=='C'){
    printf("%d", menor);
}
if (z=='A'){
    printf("%d", menor);
}
if (z=='B'){
    printf("%d", menor);
}
if (z=='C'){
    printf("%d", menor);
}
    
    return 0;
}