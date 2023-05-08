#include<stdio.h>

int main(void){
    int sum = 0, i, change;
    scanf("%d",&change);
    for(i=0;i<=change;i++){
        sum += i;
    }
    printf("%d",sum);
}