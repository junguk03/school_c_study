#include<stdio.h>
#include<string.h>

void check(){
    static int password[4] = {1, 2, 3, 4};
    int i, j, box = 0;
    int num[4];
    for(j=0;j<3;j++){
        printf("비밀번호: ");
        scanf("%d",num);
        for(i=0;i<4;i++){
            if(memcmp(num, password, sizeof(password)) == 0){
                printf("로그인 성공!!");
                box = 0;
                break;
            }
            else{
                box = 1;
                continue;
            }
        }
        if(box == 0) break;
    }
    if(box == 1) printf("로그인 시도 횟수 초과");
}
int main(void){
    check();

    return 0;
}