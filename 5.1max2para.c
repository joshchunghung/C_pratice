#include <stdio.h>
int main(){
    int max,a;
    printf("intput fitst number:");
    scanf("%d",&max);
    printf("input second number: ");
    scanf("%d",&a);
    if (a > max) {
        printf("max number is %d \n",a);
    }else{
        printf("max number is %d \n",max);
    }

    return 0;
}