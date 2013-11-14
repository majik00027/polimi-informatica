#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[50+1];
    char sesso;
    int eta;} s_anagr;

int main(){
    char * nomi[5] = {"Topolino", "Minni", "Pluto", "Clarabella", "Pippo"};
    char sesso[5] = {'M', 'F', 'M', 'F', 'M'};
    int eta[5] = {47, 37, 17, 27, 26};
    int i, c;

    s_anagr v_anagr[20], v_final[22];

    //riempimento
    for(i=0;i<5;i++){
        strcpy(v_anagr[i].nome, nomi[i]);
        v_anagr[i].sesso = sesso[i];
        v_anagr[i].eta = eta[i];}

    //cerca maschio piu giovane
    v_final[0] = v_anagr[0];
    for(i=0;i<5;i++){
        if ((v_anagr[i].eta < v_final[0].eta) && (v_anagr[i].sesso == 'M'))
            v_final[0] = v_anagr[i];}

    //cerca femmina piu giovane
    v_final[1] = v_anagr[1];
    for(i=0;i<5;i++){
        if ((v_anagr[i].eta < v_final[1].eta) && (v_anagr[i].sesso == 'F'))
            v_final[1] = v_anagr[i];}

    //carico il resto
    for(c=2,i=0;i<5;i++){
        if ((v_anagr[i].eta > 25) && (v_anagr[i].sesso == 'M')){
            printf("RESTO Cella %d: %s %d %c\n", i, v_anagr[i].nome, v_anagr[i].eta, v_anagr[i].sesso);
            v_final[c] = v_anagr[i];
            c++;}
        }

    //stampo
    for(i=0;i<c;i++)
        printf("Cella %d: %s %d %c\n", i, v_final[i].nome, v_final[i].eta, v_final[i].sesso);
}
