#include <stdio.h>
#include <stdlib.h>
/*
動態配置記憶體 malloc 
不會自動釋放記憶體

while (1){
    int a;
    其他程式碼.....
}<---------- a 在碰到while } 的時候，會自動釋放記憶體，生命週期結束
*/

int main(){
    int *number = 0; // 0代表空指標(null)
    int length = 0;
    while(1){
        int input;
        scanf("%d",&input);
        if (input == 0) break;
        int *larger=malloc(sizeof(int)*(length+1)); // 產生一個大一格的陣列
        for (int i=0; i<length; i++){
            larger[i]=number[i]; //cp 舊陣列到新陣列
        }
        free(number); // 釋放舊number的記憶體空間;要先釋放，不然number=larger執行之後，number就指向新的記憶體空間，舊的就找不到
        number=larger;// 都是指標，number會紀錄larger第一個元素的記憶體位置，陣列不可以直接複製！
        number[length]=input;//將剛輸出的數字放在最後一個位置
        length++;
    }

    // output
    printf("Numbers: ");
    for (int i = 0; i < length ; i++){
        printf("%d ",number[i]);
    }
    printf("\n");

    return 0;
}

