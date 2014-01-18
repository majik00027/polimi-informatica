#include <stdio.h>
#include <stdlib.h>

#define NOMEFILE "output.txt"
#define DIM 20

void genera(char s[DIM]) {
    int i, len;
    len = rand() % (DIM - 1) + 1;
    for (i = 0; i < len; i++) {
        s[i] = 'A' + rand() % ('Z' - 'A' + 1);}
    s[i] = '\0';}

int main(){
    FILE * fw = fopen(NOMEFILE, "w");
    char st[DIM];
    int l, len_row=0;
    for(l=0;l<29;){
        genera(st);
        len_row += strlen(st);
        if (len_row > 20){
            fprintf(fw, " num_caratteri=%d, riga=%d", len_row-strlen(st), l);
            fprintf(fw, "\n");
            printf("\n a capo");
            l++;
            len_row = strlen(st);}
        fprintf(fw, "%s", st);
        printf("%s", st);
    }
    fclose(fw);
}
