#include <stdio.h>

int main(){
	char stagione;
	float temperatura;
	printf("Inserisci la stagione, \"e\" per estate, \"i\" per inverno: ");
	scanf("%c", &stagione);
	printf("\nInserisci la temperatura: ");
	scanf("%f", &temperatura);
	if(stagione == 'e'){
		if ((temperatura >= 27.5) && (temperatura <= 32.5))
			printf("Temperatura estiva nella media.\n");
		else
			printf("Temperatura estiva NON nella media stagionale!\n");}
	else {
		if ((temperatura >= 2.5) && (temperatura <= 7.5))
			printf("Temperatura invernale nella media.\n");
		else
			printf("Temperatura invernale NON nella media stagionale!\n");}


}
