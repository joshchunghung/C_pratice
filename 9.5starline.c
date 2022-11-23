#include <stdio.h>

/*
輸入1 印出*
2 **
3 ***

*/
int main(){
    int i,n;
    printf("輸入*個數");
    scanf("%d",&n);
    for (i=0; i<=n ;i++){
        printf("*"); //不能寫單引號 '*'代表char 是整數
    }

    printf("\n");
    return 0;
}