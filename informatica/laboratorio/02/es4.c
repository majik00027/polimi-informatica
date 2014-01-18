#include <stdio.h>

void main(){
    int corrente, massimo, minimo;
    printf("Continua a inserire interi finche vuoi, quando sei stufo inserisci zero.\n");
    printf("Numero: ");
    scanf("%d", &corrente);
    massimo = minimo = corrente;
    while(corrente != 0){
        printf("Prossimo numero: ");
        scanf("%d", &corrente);
        if (corrente != 0){
        if (corrente > massimo)
            massimo = corrente;
        if (corrente < minimo)
            minimo = corrente;}
    }
    if (massimo == minimo == corrente == 0)
        printf("Non hai inserito nessun numero valido.");
    else
        printf("Il massimo numero inserito e': %d, il minimo e': %d", massimo, minimo);

}
