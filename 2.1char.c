#include <stdio.h>
// 輸入大寫字母，輸出小寫
// char 是整數型別運算,用單引號包住一個符號：'a'
// ascii 中Ａ:65 a:97
int main(){
    char input, output;
    printf("enter uppercase :");
    scanf("%c", &input);
    // output = input + 32;
    output = input + ('a' - 'A');
    printf("%c\n", output);
}