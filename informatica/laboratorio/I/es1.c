#include <stdio.h>

void main(){
	int num;
	printf("Inserisci un numero intero: ");
	scanf("%d", &num);
	if (num % 2 == 0)
		printf("Hai inserito il numero %d che è pari.\n", num);
	else
		printf("Hai inserito il numero %d che è dispari.\n", num);
}
