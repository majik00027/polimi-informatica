#include <stdio.h>

void main(){
    int num1, num2, risultato, resto;
    printf("Inserire il primo numero: ");
    scanf("%d", &num1);
    printf("Inserire il secondo numero: ");
    scanf("%d", &num2);
    risultato = num1/num2;
    resto = num1 % num2;
    printf("%d diviso %d vale %d con resto %d", num1, num2, risultato, resto);
    if(resto==0)
        if (! (risultato%2))
            printf(" e il risulato e' pari.");
        else
            printf(" ma il risultato e' dispari.");
}
