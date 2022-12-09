#include <stdio.h>
#include <stdlib.h>
/*
重新配置記憶體 realloc
realloc(舊的記憶體開頭位置,size)
size:要重新配置的大小，單位是bytes
回傳值爲重新配置的記憶體開頭位址
*/

int main(){
    int *number = 0; // 0代表空指標(null)
    int length = 0;
    while(1){
        int input;
        scanf("%d",&input);
        if (input == 0) break;
        number=realloc(number,sizeof(int)*(length+1));// 自動配置記憶體;更有效率
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

