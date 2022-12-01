#include <stdio.h>
/*

scanf 讀入資料的問題
輸入資料會先到stdin 的暫時檔案中，有順利讀取才會清空
型別錯誤 容易造成無限迴圈


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