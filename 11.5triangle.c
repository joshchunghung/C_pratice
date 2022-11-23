#include <stdio.h>
/*
輸入 5 印出 空心的三角形
*
**
* *
*  *
*****

j=1 有值
i=5 有值
i=j 有值

*/


int main(){
    int i,j,number;
    printf("input a number :");
    scanf("%d",&number);

    for (i=1;i<=number;i++){
        for (j=1;j<=i;j++){
            if ( j == 1 || i==j || i == number){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}