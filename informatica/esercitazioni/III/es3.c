#include <stdio.h>

#define DIM 10

void main(){
    int i, j;
    for(i=1;i<=DIM;i++){
        for(j=1;j<=DIM;j++){
                if( ((i * j) % 7) == 0 && ((i * j) % 5) == 0 )
                    printf("%3d*", (i*j));
                else
                    printf("%4d", (i * j));}
        printf("\n");
    }
}