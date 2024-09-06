// 7.8-Ordem
/*30/8/24*/
/******************************************************************************

Saída errada, corrigir

*******************************************************************************/
#include <stdio.h>

int main()
{
    char a , b , c ;
    int x,y,z,menor,meio,maior;
    
    printf("\nAdicione os valores a serem ordenados:");
    scanf("\n%d%d%d", &x,&y,&z);
    while((x<0)||(y<0)||(z<0)||(x>100)||(y>100)||(z>100)){
        printf("\nOs valores sao invalidos");  
        printf("\nAdicione os valores a serem ordenados:");
        scanf("\n%d%d%d", &x,&y,&z);
    }
    
    printf("\nAdicione a ordem desejada simbolizada por A, B, C:");
    scanf("\n%c%c%c", &a,&b,&c);
    
   // while((a!='A')||(b!='B')||(c!='C')||(a!='B')||(b!='C')||(c!='A')||(a!='C')||(b!='A')||(c!='B')){
      //  printf("\nA ordem e invalida"); 
       // printf("\nAdicione a ordem desejada simbolizada por A, B, C:");
       // scanf("\n%c%c%c", &a,&b,&c);
    //}
    
    if ((x<y)&&(x>z)){
        meio=x;
    }else{
        if ((x>y)&&(x<z)){
            meio=x;
        }else{
            if ((y>x)&&(y<z)){
                meio=y;
            }else{
                 if ((y<x)&&(y>z)){
                meio=y;
            }else{
                meio=z;
            }
            }
        }
    }
    
    if (x>meio){
        maior=x;
    }else{
        if(x<meio){
           menor=x;
        }
    }
    
    if(y>meio){
        maior=y;
    }else{
        if(y<meio){
            menor=y;
            }
    }
    
    if (z>meio){
        maior=z;
    }else{
        if(z<meio){
           menor=z;
        }
    }
    
    switch(a){
        case1:'A';
            a=menor;
            break;
        case2:'B';
            a=meio;
            break;
        case3:'C';
            a=maior;
            break;
    }
    
    switch(b){
        case4:'A';
            b=menor;
            break;
        case5:'B';
            b=meio;
            break;
        case6:'C';
            b=maior;
            break;
    } 
    
    switch(c){
        case7:'A';
            c=menor;
            break;
        case8:'B';
            c=meio;
            break;
        case9:'C';
            c=maior;
            break;
    }
    
    
    printf("%d %d %d\n", a, b, c);
    return 0;
}