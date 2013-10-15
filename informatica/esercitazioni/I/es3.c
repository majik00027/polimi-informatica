#include <stdio.h>

int main(){
	char gioc1, gioc2;
	printf("Carta, Forbici o Sasso, pront:\n \"c\" : per carta\n \"f\" : per forbici\n \"s\" : per sasso.");
	printf("Giocatore uno cosa vuoi giocare: ");
	scanf("%c", &gioc1);
    scanf("%c");
	printf("Giocatore due cosa vuoi giocare: ");
	scanf("%c", &gioc2);
	switch (gioc1){
		case 'c' :
            switch (gioc2){
                case 'c': printf("Pari\n"); break;
                case 's': printf("Vince il giocatore due\n"); break;
                case 'f': printf("Vince il giocatore uno\n"); break;} break;
		case 's':
            switch (gioc2){
                case 'c': printf("Vince il giocatore due\n"); break;
                case 's': printf("Pari\n"); break;
                case 'f': printf("Vince il giocatore uno\n"); break;} break;            
		case 'f':
            switch (gioc2){
                case 'c': printf("Vince il giocatoer uno\n"); break;
                case 's': printf("Vince il giocatore due\n"); break;
                case 'f': printf("Pari\n"); break;} break;};
}
