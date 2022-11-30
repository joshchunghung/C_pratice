#include <stdio.h>
/*

scanf 讀入資料的問題
*/

int main(){
    int i;
    if (scanf("%d",&i) == 1){ // 成功讀入資料回傳值會=1
        printf("%d\n",i);
    }else{
        printf("error input!\n");
    }

    return 0;
}