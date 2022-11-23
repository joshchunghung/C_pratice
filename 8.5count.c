#include <stdio.h>
int main(){
    int N;
    int count = 1;
    printf("input a integer:");
    scanf("%d",&N);
    while (count <= N) {
        printf("%d\n",count);
        count ++;
    }

    return 0;
}