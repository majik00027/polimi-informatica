#include <stdio.h>

#define MAX 3

int main(){
    int user[MAX][MAX];
    int i, j;

    for(i=0;i<MAX;i++)
        for(j=0;j<MAX;j++){
            printf("Inserire un numero: ");
            scanf("%d", &user[i][j]);
    }

    for(i=0;i<MAX;i++){
        for(j=0;j<MAX;j++)
            printf(" %2d ", user[i][j]*2);
        printf("\n");}
}
