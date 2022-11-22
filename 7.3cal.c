#include <stdio.h>

//  a+b a-b a*b a/b
int main(){
    int a,b;
    char op;
    float ans;
    scanf("%d%c%d",&a,&op,&b);
    if ( op == '+'){
        ans = a + b;
    }else if (op == '-'){
        ans = a - b;
    }else if (op == '*'){
        ans = a * b;
    }else if (op == '/' ){
        ans = (float) a / b;
    }else{
        printf("error operator\n");
        return 0;
    }


    printf("Ans: %.2f\n",ans);
    return 0;
}