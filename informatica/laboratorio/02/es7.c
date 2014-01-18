#include <stdio.h>

#define PRONT(MESSAGE, VARIABLE) printf((MESSAGE)); scanf("%d", &VARIABLE);

int main(){
    int primo, secondo;
    char op;
    float risultato;
    PRONT("Inserire il primo valore: ", primo)
    PRONT("Inserire il secondo valore: ", secondo)
    getchar();
    printf("Indicare l'operazione da svolgere:\n 'S' per somma\n'D' per differenza\n'M' per moltiplicazione\n'V' per divisione\n'X' per massimo\n'N' per minimo\n");
    scanf("%c", &op);
    switch (op){
        case 'S': {
            risultato = primo + secondo;
            printf("%d + %d = %f", primo, secondo, risultato);
            break;}
        case 'D': {
            risultato = primo - secondo;
            printf("%d - %d = %f", primo, secondo, risultato);
            break;}
        case 'M': {
            risultato = primo * secondo;
            printf("%d * %d = %f", primo, secondo, risultato);
            break;}
        case 'V': {
            risultato = primo / secondo;
            printf("%d / %d = %f", primo, secondo, risultato);
            break;}
        case 'X': {
            if (primo > secondo)
                risultato = primo;
            else risultato = secondo;
            printf("Il massimo tra %d e %d e' %f", primo, secondo, risultato);
                break;}
        case 'N': {
            if (primo < secondo)
                risultato = primo;
            else risultato = secondo;
            printf("Il minimo tra %d e %d e' %f", primo, secondo, risultato);
            break;}
        default: {
            risultato = -1;
            printf("Errore, operazione non riconosciuta, %f", risultato);}}
}
