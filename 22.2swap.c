#include <stdio.h>

/*
利用 pointer 交換 a b 的值
*/
void swap(int *,int *);

int main(){
    int a=3,b=5;
    //swap(a,b); // copy a b 到 swap 中，不會真正改a b 值
    swap(&a,&b); // copy a b 的指標 到 swap 中，會改a b 值
    printf("a=%d,b=%d\n",a,b);
    return 0;
}

void swap(int *a,int *b){  //tips: 參數加* { } 內的變數也要加*
    int t=*a;
    *a=*b;
    *b=t;
}