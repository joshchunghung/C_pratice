#include <stdio.h>
/*
sum(1)=1
sum(2)=sum(1)+2 <--- 1+2
sum(3)=sum(2)+3 <--- 1+2+3
sum(4)=sum(3)+4 <--- 1+2+3+4
....
sum(N)=sum(N-1)+N


*/
int sum(int);

int main(){
    int N;
    printf("intput a number:");
    scanf("%d",&N);
    printf("%d\n",sum(N));
    return 0;
}

int sum(int x){
    if (x == 1){
        return 1;
    }

    return sum(x-1)+x;

}