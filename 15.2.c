#include <stdio.h>
/*
查詢範圍內數字的練習
10 20 30 40 50 60 70 80 90 100 給10個數字
L R: 10 30  輸入上下界
output: 10 20 30 給出在範圍內的值

*/

int main(){
    int var[10]={0};
    printf("請輸入10個數字：");
    // scanf("%d %d %d %d %d %d %d %d %d %d", 
    // &var[0], &var[1], &var[2],&var[3], &var[4],
    // &var[5],&var[6], &var[7], &var[8], &var[9]);
   
    for (int i=0; i<10; i++){
        scanf("%d",&var[i]);
    } 
    
    int L,R;
    while (1){
        printf("輸入上下界:\n L,R:");
        scanf("%d %d",&L,&R);
        if (L == 0 && R == 0){
            printf("see ya!\n");
            break;
        }
        printf("ans:");
        for (int i=0; i < 10; i++){
            if (var[i]>=L && var[i]<=R){
                printf("%d ",var[i]);
            }
        }

        printf("\n");
    }

    return 0;
}