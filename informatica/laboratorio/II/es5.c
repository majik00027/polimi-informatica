#include <stdio.h>

void main(){

int i, next=0;
for(i=0;i<200;i++){
    next = i + 1;
    if( (!(i%3) || !(i%5) )
       &&
        (!(next%3) || !(next%5)))
            printf("(%d,%d)\n", i, next);
}}
