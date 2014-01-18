#include <stdio.h>

int main(){
    int num;
	printf("Numero da convertire in binario: ");
    scanf("%d", &num);
    while(!(num==0)){
    printf("%d / 2 = %d con resto %d\n",
            num,
            num/2,
            num%2);
    num = num/2;
};}
