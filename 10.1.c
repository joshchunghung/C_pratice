#include <stdio.h>

/*
輸入 一個整數，找出他的正因數
input 8
output 1,2,4,8

*/
int main(){
    int input,i;
    printf("輸入一個整數：");
    scanf("%d",&input);

    for (i=1; i<=input;i++){
        if (input % i == 0){
            printf("%d ",i);
        }
    }
    printf("\n");



    return 0;
}