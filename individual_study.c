#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void){
    srand(time(0));
    int num, ran = (rand()%4) + 1;
    printf("(1:가위 2:바위 3:보) 중에서 하나를 선택하시오: ");
    scanf("%d",&num);
    if(ran == 1) printf("컴퓨터는 가위를 선택하였습니다\n");
    else if(ran == 2) printf("컴퓨터는 바위를 선택하였습니다\n");
    else if(ran == 3) printf("컴퓨터는 보를 선택하였습니다\n");
    if(num == ran) printf("비겼습니다");
    else if(num == 1 && ran == 3 || num == 2 && ran == 1 || num == 3 && ran == 2) printf("사용자가 이겼습니다");
    else printf("사용자가 졌습니다");
}