#include <stdio.h>
/*
循序存取陣列元素 (使用指標)
*/

int main(){
    int v[5]={4,5,6,7,8};
    int *n=v; // n=&v[0];

    // for (int i=0; i<5; i++){
    //     printf("%d\n",*(n+i));
    // }

    // 另一種寫法
    for (n=v; n!=&v[5] ;n++){ // v[5] 不存在，但&v[5]存在，v[4]的最尾巴(?)
        printf("%d\n",*n);
    }

    return 0;
}