#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// rand() 隨機產生整數
int main(){
    srand(time(0));// 亂數種子，只需要呼叫一次
    for (int i=0; i<5;i++){
        printf("%d\n",rand());
    }


    return 0;
}