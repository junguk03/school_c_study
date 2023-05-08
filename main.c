#include<stdio.h>
#include<limits.h>

void Pronounce(void){
    int x = 20, y = 10;
    int sum, diff, mul, div;
    sum = x + y;
    diff = x - y;
    mul = x * y;
    div = x / y;
    printf("두수의 합: %d\n", sum);
    printf("두수의 차: %d\n", diff);
    printf("두수의 곱: %d\n", mul);
    printf("두수의 몫: %d\n", div);
}

void Sumex(){
    int num1, num2;
    int sum;
    printf("첫번째 숫자를 입력하시오: ");
    scanf("%d",&num1);
    printf("두번째 숫자를 입력하시오: ");
    scanf("%d",&num2);
    sum = num1 + num2;
    printf("두수의 합: %d\n",sum);
}

void average() {
    double num1, num2, num3; 
    double sum, avg;
    printf("3개의 실수를 입력하시오: ");
    scanf("%lf %lf %lf", &num1, &num2, &num3);
    sum = num1 + num2 + num3; 
    avg = sum / 3;
    printf("합계=%.2lf\n", sum); 
    printf("평균=%.2lf\n", avg);
}

void volume(){
    int w, h;
    scanf("%d %d",&w,&h);
    float area;
    area = 0.5 * w * h;
    printf("%.2f\n",area);
}

void bite(){
    int x;
    printf("변수x의 크기:%d\n",sizeof(x));
    printf("char의 크기:%d\n",sizeof(char));
    printf("int의 크기:%d\n",sizeof(int));
    printf("short의 크기:%d\n",sizeof(short));
    printf("long의 크기:%d\n",sizeof(long));
    printf("float의 크기:%d\n",sizeof(float));
    printf("double의 크기:%d\n",sizeof(double));

}

void over(){
    short s_money = SHRT_MAX;
    unsigned short u_money = USHRT_MAX;

    s_money ++;
    printf("s_money = %d\n",s_money);

    u_money++;
    printf("u_money = %d\n",u_money);

}

#define TAX_RATE 0.2
void con(){
    const int MONTHS = 12;
    int m_salary,y_salary;

    printf("월급을 입력하시오");
    scanf("%d",&m_salary);
    y_salary = MONTHS*m_salary;
    printf("연봉은 %d입니다.\n",y_salary);
    printf("세금은 %f입니다.\n",y_salary*TAX_RATE);

}

void cha(){
    int x = 3;
    int y = -3;

    printf("x = %08X\n",x);
    printf("y = %08X\n",y);
    printf("x + y = %08X\n",x + y);
}

void binary(){
    int x = 3;
    int y = -3;
    printf("x = %02X\n",x);
    printf("y = %02X\n",y);
}

void C_F(){
    double C, F;
    printf("화씨값을 입력하세요: ");
    scanf("%lf",&F);
    C = (5.0/9.0)*(F-32);
    printf("섭씨값은 %.2lf도 입니다.",C);
}

int main(){
    Pronounce();
    Sumex();
    average();
    volume();
    bite();
    over();
    con();
    cha();
    binary();
    C_F();
    return 0;
}