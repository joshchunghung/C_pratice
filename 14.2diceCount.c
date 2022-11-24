#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int count[6]={0}; // 等於{0,0,0,0,0,0}
    int x;
    srand(time(0));
    for (int i=0; i<6000;i++){
        x=rand() % 6;
        count[x]++;
    }

    for (int i=0; i<6 ; i++){
        printf("%d:%d\n",i+1,count[i]);
    }
    
    return 0;
}