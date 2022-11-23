#include <stdio.h>
/*
求簡易整數方程式的練習
int x,y
x+y=30
x*y=221
x=?
y=?
*/

int main(){
    int i,j;
    for(i=1;i<=15;i++){
        j=30-i;
        if (i*j == 221){
            printf("x=%d y=%d\n",i,j);
            break;
        }
    }


    return 0;
}