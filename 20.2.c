#include <stdio.h>
void read_str(char p[]);

int main(){
    char p[15];
    read_str(p);
    printf("%s\n",p); // 印出整個字元陣列

    return 0;
}

void read_str(char p[]){
    int i=0;
    while (1){
        scanf("%c",&p[i]);
        if (p[i] == '\n') { // 按下enter 等同換行
            break;
        }
        i++;
    }
    p[i]='\0'; // 字元陣列最後一個字是\0
}