#include <stdio.h>

int main(){
    int num = 8;
    int i;
    printf("input a number:");
    scanf("%d",&i);
    while (i != num){
        if (i > num){
            printf("too large\n");
        }else{
            printf("too small\n");
        }
        printf("input a number again:");
        scanf("%d",&i);
    }

    printf("Great! the number is %d\n",num);
    return 0;
}