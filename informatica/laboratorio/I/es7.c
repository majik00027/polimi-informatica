#include <stdio.h>

int main(){
    int altezza;
    int i,j;
    printf("Inserire l'altezza minore di 10: ");
    scanf("%d", &altezza);
    for(i=0;i<altezza;i++)
        printf("%d", i);
    printf("\n");
    for(i=1;i<=altezza;i++){
        for(j=0;j<i;j++)
            printf("*");
        printf("\n");}
}
