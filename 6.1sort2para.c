#include <stdio.h>

int main(){
    int a,b,tmp;
    printf("input 2 numbers:");
    scanf("%d%d",&a,&b);
    if ( a > b) {
        tmp=a;
        a=b;
        b=tmp;
        printf("排序大小爲：%d,%d\n",a,b);
        return 0;
    }
    printf("排序大小爲：%d,%d\n",a,b);
    return 0;
}