#include <stdio.h>

int main(){
    int min, max;
    int somma;
    float media;
	printf("Inserire l'estremo inferiore dell'intervallo: ");
    scanf("%d", &min);
    printf("\nInserire l'estremo maggiore dell' intervallo: ");
    scanf("%d", &max);
    //input non validato
    somma =  (max * (max+1))/2 - (min*(min+1)/2) ;
    media = somma / (max - min);
    printf("Intervallo [%d , %d]\n somma = %d media = %f\n",
            min, max,
            somma,
            media);
}
