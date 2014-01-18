#include <stdio.h>

int main(){
    float temp;
    float max = -273.15;
    int zero = 0;
    printf("Inserire le temperature in gradi Centigradi.");
	do{
        printf("\nInserire la prossima temperatura: ");
        scanf("%f", &temp);
        if (temp >= -273.15){
            printf("%f C = %f K = %f F \n",
                    temp,
                    temp + 273.15,
                    32 + (temp /100) * 180);
            if(temp > max)
                max = temp;
            if(temp == 0)
                zero = 1;}
    } while(temp >= -273.15);
        //Andrebbe gestito il caso in cui il primo valore è il valore di uscita
        printf("La temperatura massima registrata è stata: %f\n", max);
        if(zero)
            printf("E' stato registrato almeno uno zero.\n");
        else
            printf("Non è stato registrato nessun zero.\n");
}
