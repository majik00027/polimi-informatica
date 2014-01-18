#include <stdio.h>

#define DIM 3

int main(){
    int i, j, num;
    int matrix[DIM*2][DIM*2];
    srand(time(NULL));
    for(i=0;i<DIM;i++){
        for(j=0;j<DIM;j++){
            num = rand() % 10;
            matrix[i][j] = num;
            matrix[(DIM*2-i)-1][j] = num;
            matrix[(DIM*2-i)-1][(DIM*2-j)-1] = num;
            matrix[i][(DIM*2-j)-1] = num;}}


    for(i=0;i<DIM*2;i++){
        for(j=0;j<DIM*2;j++)
            printf("%d ", matrix[i][j]);
        printf("\n");}
}
