#include <stdio.h>

void main(){
    int i=1, corrente;
    printf("Continua a inserire interi finche vuoi, quando sei stufo inserisci 40.\n");
    printf("Numero: ");
    scanf("%d", &corrente);
    while(corrente != 40){
        printf("Prossimo numero: ");
        scanf("%d", &corrente);
        i++;
    }
    printf("In totale hai inserito %d numeri.", i);

}
