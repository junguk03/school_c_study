#include<stdio.h>
#include<math.h>
int plus = 0;

int menu(){
    int num;
    printf("<1>잔액\n");
    printf("<2>입금\n");
    printf("<3>출금\n");
    printf("<4>종료\n");
    printf("메뉴를 선택하세요:");
    scanf("%d",&num);
    return num;
}

int sum(){
    printf("현재 잔액은 %d입니다.\n",plus);
}

void push(){
    int money;
    printf("입금할 금액을 적으세요:");
    scanf("%d",&money);
    plus += money;
}

void pull(){
    int money;
    printf("출금할 금액을 적으세요:");
    scanf("%d",&money);
    plus -= money;
}


int main(void){
    while(1){
        switch (menu())
        {
        case 1:
                sum();
                break;
        case 2:
                push();
                break;
        case 3:
                pull();
                break;
        case 4:
                printf("종료합니다\n");
                break;
        
        default:
                printf("잘못된 선택입니다");
                break;
        }
    }
    return 0;
}