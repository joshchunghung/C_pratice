#include <stdio.h>

/*
指標對整數的加減運算

&v[0]+1 v[0]往後一個元素的指標位置=&v[1]
&v[1]-1 v[1]往前一個元素的指標位置=&v[0]

&v[1]+&v[0] 未定義行為

&v[1]-&v[0] 代表兩個指標之間間隔的元素個素==1
&v[3]-&v[0]=3

*/

int main(){
    int v[5]={4,5,6,7,8};
    printf("&v[0]=%lu\n",&v[0]);
    printf("&v[0]+1=%lu\n",&v[0]+1); // ,&v[0]+1 == &v[1]
    printf("&v[1]=%lu\n",&v[1]);




    return 0;
}