#include<stdio.h>
#include<string.h>

int stack[100001];
int count = 0;

void push(int n){
    stack[count] = n;
    count++;
}
void pop(){
    if(count != 0){
        count--;
        printf("%d\n",stack[count]);
        stack[count] = 0;
    }
    else printf("-1\n");
}
void size(){
    printf("%d\n",count);
}
void empty(){
    if(count == 0) printf("1\n");
    else printf("0\n");
}
void top(){
    if(count != 0){
        printf("%d\n",stack[count - 1]);
    }
    else printf("-1\n");
}

int main(void){
    int n;
    char number[10];
    scanf("%d",&n);
    int stack[100];
    for(int i=0;i<n;i++){
        scanf("%s",number);
        if(strcmp(number,"push") == 0){
            int num;
            scanf("%d",&num);
            push(num);
        }
        else if(strcmp(number,"pop") == 0) pop();
        else if(strcmp(number,"size") == 0) size();
        else if(strcmp(number,"empty") == 0) empty();
        else if(strcmp(number,"top") == 0) top();
    }
}