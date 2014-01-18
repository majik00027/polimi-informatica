#include <stdio.h>

int main(){
    int a, b, x, ntentativi;
    printf("Inserire l'indice basso: ");
    scanf("%d", &a);
    printf("Inserire l'indice alto: ");
    scanf("%d", &b);
    printf("Inserisci il numero da cercare: ");
    scanf("%d", &x);
    printf("Inserire il numero massimo di tentativi: ");
    scanf("%d", &ntentativi);

    int i, medio, trovato=0;
    for(i=0;(i<ntentativi && !trovato);i++){
        medio = (a + b) / 2;
        if(medio == x){
            printf("Trovato il numero: %d in %d tentativi.\n", x, i);
            trovato = 1;}
        else if(medio > x){
            printf("Tentativo %d Cerco %d Intervallo [%d %d] (a+b)/2 = %d: Non Trovato, cerco a sinistra\n",
                   i, x, a, b, medio);
                   b = medio;}
            else {
                printf("Tentativo %d Cerco %d Intervallo [%d %d] (a+b)/2 = %d: Non Trovato, cerco a destra\n",
                i, x, a, b, medio);
                a = medio;}}
    return 1;
}
