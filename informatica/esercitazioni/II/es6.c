#include <stdio.h>

void main(){
    int C;
    float F;
    for (C = -20;C<200;C+=7){
        F = 32 + (C * 9.0 / 5.0);
        printf("F: %.0f C: %d\n", F, C);
        if (F - C == 100){
            printf("Delta T = 100 per F: %.0f e %d\n", F, C);}}
}
