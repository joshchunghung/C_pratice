#include <stdio.h>
int main()
{
    // int int1; //電腦準備一個整數記憶體空間給int1
    // int int2;
    // int sum;
    int int1, int2, sum;
    printf("enter 1st integer:");
    // scanf 表示從鍵盤讀取
    scanf("%d", &int1); //&表示讀記憶體位置(取址運算)
    printf("enter 2nd  interger:");
    scanf("%d", &int2);
    sum = int1 + int2;
    printf("the sum is %d. \n", sum);
    return 0;
}