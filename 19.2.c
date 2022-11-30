#include <stdio.h>

/*
對任意大小的陣列求最大值

*/

int maxv(int v[],int N);

int main(){
    int v[3] ={5,3,9}; // 宣告陣列一定要給大小
    printf("max is %d\n",maxv(v,3));
    return 0;
}

int maxv(int v[],int N) { // 參數不用給大小,v[]是一種指標
    int max = v[0];
    for(int i = 1; i <= N; i++){
        if (v[i] > max){
            max = v[i];
        }
    }

    return max;
}