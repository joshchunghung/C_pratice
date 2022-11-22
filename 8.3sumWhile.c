#include  <stdio.h>

// e求不定正整數的和，直到輸入值爲0
int main(){
    int sum,a;
    sum=0;
    printf("input a number:");
    scanf("%d",&a);
    while (a != 0){
        sum = sum + a;
        printf("input a number:");
        scanf("%d",&a);
    }
    printf("the sum is %d\n",sum);

    return 0;
}