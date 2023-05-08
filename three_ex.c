#include<stdio.h>

int main(void){
    int i = 0;
    while(i<11){
        i++;
        if(i%3==0)
            continue;
        printf("%d",i);
    }
}