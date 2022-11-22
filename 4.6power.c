#include <stdio.h>

// C 語言中沒有次方的概念
// 判斷是否為直角三角形 a^2+B^2=C^2
int main(){
    int a,b,c;
    printf("請輸入三邊長:");
    scanf("%d%d%d",&a,&b,&c);

    if (a*a+b*b==c*c ||
        a*a+c*c==b*b ||
        c*c+b*b==a*a
    ){
        printf("這是直角三角形\n");
    }

}