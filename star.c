#include<stdio.h>

int main(void){
    int i, j, star, count;
    scanf("%d",&count);
    for(i=0;i<count;i++){
        for(j=i;j<count;j++){
            printf("*");
        }
        printf("\n");
    }
}