#include <stdio.h>
// 更好的記憶體寫法，只有兩個變數
// 但比較多個＝，＝在Ｃ有複製的味道，所以=多代表cpu效率變慢
// 實務上，先使用記憶體，不用完就不會有感覺，CPU有用到就會感覺慢
int main()
{
    int integer, sum;
    printf("enter 1st integer:");
    scanf("%d", &integer);
    sum = integer;
    printf("enter 2nd  interger:");
    scanf("%d", &integer);
    sum = sum + integer;
    printf("The sum is  %d \n", sum);
    return 0;
}