#include <stdio.h>
#include <stdlib.h>

#define NOMEFILE "file.txt"
#define DIM 100


int main(){
    FILE * fw = fopen(NOMEFILE, "w");
    char st[DIM];
    long int corrent = 0;
    gets(st);
    while(strcmp(st, "fine") != 0){
        if (strcmp(st, "indietro") == 0)
            fseek(fw, corrent, SEEK_SET);
        else{
            corrent = fprintf(fw, "%s ", st);
        }
        gets(st);
    }

    fclose(fw);
}
