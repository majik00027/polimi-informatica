#include <stdio.h>

int main(){
    int primo[5], secondo[4], comuni[4];
    int i, j, c;

    printf("Inserire 5 elementi nel primo vettore\n");
    for(i=0;i<5;i++){
        printf("Inserire un numero: ");
        scanf("%d", &primo[i]);}

    printf("Inserire 4 elementi nel secondo vettore\n");
    for(i=0;i<4;i++){
        printf("Inserire un numero: ");
        scanf("%d", &secondo[i]);}

    c = 0;

    for(i=0;i<5;i++){
        for(j=0;j<4;j++){
            if (primo[i] == secondo[j]){
                comuni[c] = primo[i];
                c++;}}}

    printf("Numeri %d comuni ", c);
    for(i=0;i<c;i++)
        printf("%d ", comuni[i]);

}
