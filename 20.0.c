#include <stdio.h>
/*
字串
使用 '\0' 當作字元陣列的結尾
*/

void print_str(char v[]){
    for (int i = 0; v[i] != '\0'; i++){
        printf("%c", v[i]);
    }
     printf("\n");
}

int main(){
    char v[] = {'H','e','l','l','o','\0'}; // 等價於"Hello"
    print_str(v);
}