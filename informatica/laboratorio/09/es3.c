#include <stdio.h>
#include <stdlib.h>

#define FILEBIN “matrice.dat"
#define DIM 10

char change_char(char i){
    if (i < 'a')
            return i + ('a' - 'A');
    return i - ('a' - 'A');
}

void copiafile(char * origin, char * copia){
    FILE * fr = fopen(origin, "r");
    FILE * fw = fopen(copia, "w");

    char c = fgetc(fr);

    while(c != EOF){
        printf("%c %c\n", c, change_char(c));
        putc(change_char(c), fw);
        c = fgetc(fr);}

    fclose(fw);
    fclose(fr);
}

int main(){
    copiafile("sorgente.txt", "copia.txt");
}
