#include <stdio.h>
int div2(int); // 程式宣告 有宣告就可以了 不一定要在一開始寫定義

int main(){
    int N;
    printf("input a number:");
    scanf("%d",&N);
    printf("%d\n",div2(N));
    return 0;
}

int div2(int x){ // <---- 這裏就一定要寫變數x
    return x/2;
}