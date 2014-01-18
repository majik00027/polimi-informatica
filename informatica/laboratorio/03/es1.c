#include <stdio.h>

void main(){
    int contatore = 0;
    int da_stampare;
    printf("numero di \'*\': ");
    scanf("%d", &da_stampare);
    while(da_stampare){
        contatore += da_stampare;
        int i;
        for(i = 0; i<da_stampare; i++){
            printf("*");
        }
        printf("\nnumero di \'*\': ");
        scanf("%d", &da_stampare);
    }
    printf("Stampati %d \'*\'", contatore);

}
