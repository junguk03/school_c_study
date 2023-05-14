#include<stdio.h>

int main(void){
    int num, i, j, sum = 0;
    printf("정수를 입력하시오: ");
    scanf("%d",&num);
    for(i=2;i<num;i++){
        sum = 0;
        for(j=1;j<i;j++){
            if(i%j == 0){
                sum++;
            }
            else continue;
        }
        if(sum == 1) printf("%d ",i);
        else continue;
    }
}