#include<stdio.h>

int main(void){
    int n, b, i=100, count = 0, id = 0;
    char blank[101];
    scanf("%d %d",&n,&b);
    while(n/b != 0){
        blank[i] = n%b;
        n /= b;
        if(n<b && n!=0){
            blank[i-1] = n;
            count++;
        }
        i--;
        count++;
    }
    id = 101 - count;
    while(id < 101){
        if(blank[id]>=10 && blank[id]<=35){
            blank[id] += 55;
        }
        else{
            blank[id] += 48;
        }
        id++;
    }
    id = 101 - count;
    while(id < 101){
        printf("%c",blank[id]);
        id++;
    }
}