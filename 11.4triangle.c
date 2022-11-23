#include <stdio.h>
/*
輸入3
*
**
***

*/

int main(){
    int i,j,N;
    printf("input a number:");
    scanf("%d",&N);
    for (i=1 ; i<=N;i++){
        for (j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }


    return 0;
}