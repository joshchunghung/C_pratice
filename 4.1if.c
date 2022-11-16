#include <stdio.h>
int main(){
    int a ;
    printf("input a integer: ");
    scanf("%d",&a);
    if (a>4) {
        printf("%d is larger than 4\n",a);
    }else{
         printf("4 is larger than %d\n",a);
    }

    return 0;
}