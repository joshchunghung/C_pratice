#include <stdio.h>
/*

變數找近的{

}

*/
int main(){
    int i = 3;
    printf("%d\n", i);
    if(i==3){
        i = i+1;
        printf("%d\n", i);
        int i = 6;
        printf("%d\n", i);
        i=i+1;
        printf("%d\n", i);
    }
    
    printf("%d\n", i);



    return 0;
}