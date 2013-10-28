#include <stdio.h>

#define INFERIORE 50

void main(){
    int x, i, parita, tot=0;
    for(x=INFERIORE;x<70;x++){
        if( (x%3) && (x%7))
            printf("%d, ne' per 3 che per 7 -> 0 \n", x);
        else if(( !(x%3) && !(x%7)))
            printf("%d, o per 3 che per 7 -> -1 \n", x);
        else{
            if(x%3)
                parita = 7;
            else
                parita = 3;
            for(tot=0,i=x*2;i<=150;i+=parita)
                tot += i;
            printf("%d solo per %d -> %d\n", x, parita, tot);}
    }

}
