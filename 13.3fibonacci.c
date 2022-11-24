#include <stdio.h>
/*
F(1)=1
F(2)=2  
F(3)=3 <--- F(2)+F(1)
F(4)=5 <--- F(3)+F(2)
F(5)=8 <--- F(4)+F(3)
.....
F(N)=F(N-2)+F(N-1)


*/
int F(int);

int main(){
    int N;
    printf("intput a number:");
    scanf("%d",&N);
    printf("%d\n",F(N));
    return 0;
}

int F(int x){
    if (x == 1){
        return 1;
    }
    if (x == 2){
        return 2;
    }
    return F(x-1)+F(x-2);

}