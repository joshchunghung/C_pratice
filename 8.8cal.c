#include <stdio.h>
int main(){
    printf("編號 售價\n");
    printf("1 150\n");
    printf("2 200\n");
    printf("3 113\n");
    printf("4 80\n");
    printf("5 15\n");

    int input,sum;
    sum=0;
    while (input != 0){
        printf("輸入商品編號 0爲結束:");
        scanf("%d",&input);
        switch (input){
            case 1:
                sum+=150;
                break;
            case 2:
                sum+=200;
                break;
            case 3:
                sum+=113;
                break;
            case 4:
                sum+=80;
                break;
            case 5:
                sum+=15;
                break;
            case 0:
                printf("已結帳！");
                break;   
            default:
                //bug: 輸入 a 會變成無限迴圈 
                printf("沒有這項商品，請重新輸入！\n");
                break;
            }
    }
    
    printf("total %d\n",sum);
    return 0;
}