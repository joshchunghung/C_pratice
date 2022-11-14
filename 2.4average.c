#include <stdio.h>

int main(){
    // int + int -> int
    // double + double -> double

    // 不同型別運算時，會有隱性轉型，小範圍會轉成範圍大的值再來運算
    // double > float > int
    // int + float -> int轉float + float -> float (float的範圍>int的範圍)

    int i,j,k;
    printf("input 1st integer:");
    scanf("%d",&i);
    printf("input 2nd integer:");
    scanf("%d",&j);
    printf("input 3r;d integer:");
    scanf("%d",&k);
    //隱式轉型
    // double ave=(i+j+k)/3.0; // int/3.0 使結果變成double 
    // 強制轉型，或是顯式轉型
    double ave = (i+j+k)/ (double) 3;
    printf("the average value is %.2f \n",ave);
    return 0;
}