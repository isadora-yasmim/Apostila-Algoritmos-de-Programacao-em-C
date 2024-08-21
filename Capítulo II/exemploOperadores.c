#include <stdio.h>

int main(){
    int x,y,z;
    printf("\nEntre com os valores de X, Y, Z:");
    scanf("%d %d %d", &x, &y, &z);
    printf("\n %d == %d -> resultado %d\n", x, y, x==y);
    return 0;
}