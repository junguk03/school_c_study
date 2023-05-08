#include<stdio.h>

void print_stars(){
    int i;
    for(i=0;i<30;i++){
        printf("*");
    }
}

int main(void){
    print_stars();
    printf("\nHello World\n");
    print_stars();
    printf("\n");
    return 0;
}