#include<stdio.h>

int main(void){
    char a[101], c[101];
    int n, m, i, j, k, b, x, y, d;
    scanf("%d %d\n",&n,&m);
    for(b=0;b<101;b++){
        a[b] = b;
    }
    for(b=0;b<m;b++){
        scanf("%d %d %d",&i,&j,&k);
        x = i;
        y = k;
        for(d=0;d<101;d++){
            c[d] = a[d];
        }
        if(i != k){
            while(x != k){
                a[x+j-k+1] = c[x];
                x++;
            }
            while(y != j+1){
                a[y-k+i] = c[y];
                y++;
            }
        }    
    }
    for(b=1;b<=n;b++){
        printf("%d ",a[b]);
    }
}