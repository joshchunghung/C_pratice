#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// void 代表沒有回傳值
void dice(void); //dice(void) 代表不需要輸入參數
int main(){
    srand(time(0));
    for (int i = 0 ; i < 5 ; i++){
        dice();
    }
    return 0;
}

void dice(){
    int x = rand();
    printf("%d\n",x%6+1);
}