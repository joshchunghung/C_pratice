#include <stdio.h>
/*
輸入 3 印出
***
***
***

*/


int main(){
    int i,j,number;
    printf("input a number :");
    scanf("%d",&number);

    for (i=0;i<number;i++){
        for (j=0;j<number;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}