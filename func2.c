#include<stdio.h>

int factorial(int n){
    int result = 1, i;
    for(i=1;i<=n;i++){
        result *= i;
    }
    return result;
}

int main(void){
    int n;
    printf("알고 싶은 팩토리얼의 값은?");
    scanf("%d",&n);
    printf("%d",factorial(n));
    return 0;
}