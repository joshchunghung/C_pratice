#include <stdio.h>
//  abc由大到小排好
int main(){
    int a,b,c,t;
    printf("intput 3 number:");
    scanf("%d%d%d",&a,&b,&c);

    // 要處理的條件： abc 不滿足 a>=b>=c
    if (b > a){
        t = a;
        a = b;
        b = t;
    }
    if ( c > a){
        t = a;
        a = c;
        c = t;
    }
    if ( c > b ){
        t = b;
        b = c;
        c = t;
    }
    
    printf("由大到小的順序爲%d %d %d\n",a,b,c);

    return 0;
}