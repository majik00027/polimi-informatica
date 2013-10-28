#include <stdio.h>
#include <stdlib.h>

#define DIM 10

void main(){
    int contatore = 0, num, c_pari=0, c_dispari=0;

    srand(time(NULL));

    num = rand() % 100;
    while(
            ((contatore <= 10) || ((c_pari - c_dispari) < 2) )
            && // or, in effetti è orribile
            (contatore != 20)
          )
        {
        if(num % 2){printf("dispari %d\n", num);
            c_dispari++;}
        else {printf("pari %d\n", num);
            c_pari++;}
        printf("%d diff: %d\n", num, c_pari-c_dispari);
        num = rand() % 100;
        contatore++;
        }
        printf("Ricevuri: %d pari e %d dispari", c_pari, c_dispari);
}
