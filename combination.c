#include<stdio.h>

int factorial(int n){
    int result = 1, i;
    for(i=1;i<=n;i++){
        result *= i;
    }
    return result;
}
int combination(int n, int r){
    return factorial(n) / (factorial(n-r) * factorial(r));
}
int get_intager(void){
    int n;
    printf("정수를 입력하세요:");
    scanf("%d",&n);
    return n;
}
int main(void){
    int a, b;
    a = get_intager();
    b = get_intager();
    printf("C(%d,%d) = %d",a,b,combination(a,b));
}