#include <stdio.h>

int main(){
    int A,B;
    printf("\ninforme dois n meros(cada um sendo 0 ou 1):");
    scanf("%d %d", &A, &B);
    printf("\n%d AND %d resultado %d\n", A, B, A&&B);
    printf("\n%d OR %d resultado %d\n", A, B, A||B);
    printf("\nNOT %d resultado %d\n", A, !A);
    
    return 0;
}