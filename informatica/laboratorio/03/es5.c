#include <stdio.h>

#define SUPERIORE 10

void main(){
    int x, parita, i, tot;
    for(x=1;x<=SUPERIORE;x++){
        parita = x % 2;
        printf("X = %d ", x);
        if(parita)
            printf("pari ");
        else
            printf("dispari ");
        printf("somma: ");
        tot = 0;
        for(i=x+1;i<x+7;i++)
            if(i % 2 == parita)
        {
            printf("%d + ", i);
            tot+= i;
        }
        printf("0 = %d\n", tot);
        }
}
