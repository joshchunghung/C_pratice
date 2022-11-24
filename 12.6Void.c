#include <stdio.h>
void printStar(int); // 不須要回傳值的函式用void

int main (){

    printStar(5);
    return 0;
}

void printStar(int x) { 
    int i;
    for (i=0; i<x; i++) {
        printf("*");
    }

    printf("\n");
    return; // return 可省略
}