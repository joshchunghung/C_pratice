#include <stdio.h>
/*
使用 sizeof 求陣列長度
*/

void f(int v[]);

int main(){
    int v[3]={2,4,6};
    printf("sizeof int = %zu\n",sizeof(int));//sizeof 出來的型別是 size_t
    printf("sizeof v[0] = %zu\n",sizeof(v[0]));
    printf("sizeof v = %zu\n",sizeof(v)); // 三個元素，每個都是int --> int的size*3
    printf("length v = %zu\n",sizeof(v)/sizeof(v[0]));
    printf("-------f(v)--------\n");
    f(v);
    return 0;
}

// 證明v[]只是指標，只是像陣列
void f(int v[]){
    printf("sizeof int = %zu\n",sizeof(int));
    printf("sizeof v[0] = %zu\n",sizeof(v[0]));
    printf("sizeof v = %zu\n",sizeof(v)); 
    printf("length v = %zu\n",sizeof(v)/sizeof(v[0]));
}