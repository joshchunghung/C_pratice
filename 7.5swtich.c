#include <stdio.h>

int main (){
    int a,b;
    float ans;
    char op;
    scanf("%d%c%d",&a,&op,&b);
    switch (op){ // <-----整數值 expression
    case '+': // <-----整數常數值 
        ans= a+b;
        break;
    case '-':
        ans= a-b;
        break;
    case '*':
        ans= a*b;
        break;
    case '/':
        ans= (float)a/b;
        break;
    default:
        printf("error operator\n");
        return 0;
        break;
    }

    printf("Ans : %.2f\n", ans);
    return 0;


    // 可以多個case 共用同一段程式碼
    // case 2:
    // case 3:
    // case 4:
    //     code;
    //     break;
}