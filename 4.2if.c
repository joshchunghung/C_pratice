#include <stdio.h>
// 一個人300元，輸入人數後，若超過3000元可以打八折，並輸出價格
int main(){
    int people;
    int price = 300;
    printf("請輸入參加的人數: ");
    scanf("%d",&people);
    price=price*people;
    if (price > 3000){
        price=price*0.8;
        printf("參加人數是%d,總金額是%d\n",people,price);
    }else{
        printf("參加人數是%d,總金額是%d\n",people,price);
    }

    // 輸入多個參數
    // int i,j,k
    // scanf("%d%d%d",&i,&j,&k);


    return 0;
}