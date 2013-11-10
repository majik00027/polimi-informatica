#include <stdio.h>

void main(){
    int n;
    printf("Inserisci il numero: ");
    scanf("%d", &n);
    if(n%2==1 || ! (n>=20 && n<=90))
        printf("Vero.");
    else
        printf("Falso.");
}
