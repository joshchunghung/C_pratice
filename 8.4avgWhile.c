#include  <stdio.h>

// e求不定正整數的平均，直到輸入值爲0
int main(){
    int sum,a;
    sum=0;
    printf("input a number:");
    scanf("%d",&a);
    int count = 0;
    while (a != 0){
        count++;
        sum = sum + a;
        printf("input a number:");
        scanf("%d",&a); 
    }
    printf("the avg is %.2f\n",sum/(float) count);

    return 0;
}