#include <stdio.h>

#define MAX 10

int main(){
    int user[MAX], random_vec[MAX], mapped_vec[MAX];
    int dimensioni, i;

    printf("Quanti numeri 0 < num < 10");
    scanf("%d", &dimensioni);

    for(i=0;i<dimensioni;i++){
        printf("Inserire prossimo numero: ");
        random_vec[i] = rand() % 10;
        scanf("%d", &user[i]);
        mapped_vec[i] = random_vec[i] + user[i];}

    printf("\nDa utente: ");
    for(i=0;i<dimensioni;i++)
        printf("%d ", user[i]);

    printf("\nRandom: ");
    for(i=0;i<dimensioni;i++)
        printf("%d ", random_vec[i]);

    printf("\nMapped: ");
    for(i=0;i<dimensioni;i++)
        printf("%d ", mapped_vec[i]);
}
