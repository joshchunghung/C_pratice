#include <stdio.h>
/*
給一個值，看是不是質數

*/

int main(){
    int max,i;
    printf("intput a number:");
    scanf("%d",&max);

    for (i=2;i<max;i++){
        if (max % i == 0){
            printf("%d 不是質數\n",max);
            return 0;
        }
    }
    printf("%d 是質數\n",max);
    return 0;
}