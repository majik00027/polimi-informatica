#include <stdio.h>

#define MAX 100

int main(){
    int i;
    int vettore[MAX];
    int vettore_finale[10];
    srand(time(NULL));
    for(i=0;i<MAX;i++) //riempio il vettore
        vettore[i] = rand() % 100;
    for(i=0;i<10;i++)   //inizializo il vettore di supporto
        vettore_finale[i] = 0;

    for(i=0;i<MAX;i++)
        vettore_finale[vettore[i]/10]++;

    for(i=0;i<10;i++)
        printf("%d...%d = %d\n", i*10, i*10+9, vettore_finale[i]);
}
