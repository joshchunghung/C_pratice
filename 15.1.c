#include <stdio.h>
/*
查數字練習
1：
2：
3：
4：
5：
Q:

*/

int main(){
    int count[5]={0};
    printf("請輸入五個數字：\n");
    for (int i = 0;i< 5 ;i++){
        printf("%d:",i+1);
        scanf("%d",&count[i]);
    }
    printf("--------------\n");
    printf("開始查詢： 0:exit\n");
    int input;
    do{ 
        printf("Q:");
        scanf("%d",&input);
        if (input <= 5 && input > 0){
            printf("%d\n",count[input-1]);
        }else if (input == 0){
            printf("see ya!\n");
        }else{
            printf("error! only 1~5; 0:exit\n");
        }
    }while (input);


    return 0;
}