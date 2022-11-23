#include <stdio.h>
/*
輸入 3 印出 空心的長方形
***
* *
***

*/


int main(){
    int i,j,number;
    printf("input a number :");
    scanf("%d",&number);

    for (i=1;i<=number;i++){
        for (j=1;j<=number;j++){
            if ( i == 1 || i==number|| j==1 || j == number){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}