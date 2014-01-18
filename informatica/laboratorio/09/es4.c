#include <stdio.h>
#include <stdlib.h>

#define FILEBIN “matrice.dat"
#define DIM 10

typedef struct{
    int valore; //valore >= 0
    char segno; //'P' se il valore e' positivo, 'N' se negativo
    int riga, colonna;} s_elem;

int genera_num() {
    return rand() % 21 - 10;
}

int abs(int n){
    if (n >= 0)
        return n;
    return -n;
}

int main(){
    srand(time(NULL));
    s_elem matrix[DIM][DIM];
    s_elem elm;
    int i,j, num;
    FILE * fw = fopen("matrice.dat", "w");
    FILE * fr;

    for(i=0;i<DIM;i++){
        for(j=0;j<DIM;j++){
            //printf("(%d-%d)\n", i ,j);
            num = genera_num();
            if (num >= 0){
                matrix[i][j].segno = 'P';}
            else {
                matrix[i][j].segno = 'N';}
            matrix[i][j].valore = abs(num);
            matrix[i][j].riga = i;
            matrix[i][j].colonna = j;
            printf(" %.2d ", num);
            fwrite(&matrix[i][j], sizeof(s_elem), 1, fw);
    }
        printf("\n");
    }
    fclose(fw);
    printf("Matrice scritta\nRilettura: \n");
    fr = fopen("matrice.dat", "r");
    while (fread(&elm, sizeof(s_elem), 1, fr)){
        num = elm.valore;
        if (elm.segno == 'N')
            num *= -1;
        printf(" %.2d ", num);
        if (elm.colonna == DIM-1)
            printf("\n");
    }
    return 1;
}
