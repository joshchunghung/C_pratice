#include <stdio.h>
//  賦值運算
//  a+=2 -> a = a + 2
//  a++ ---> a+=1 
//  ++a ---> a+=1 賦值的時候會才有差
int main(){
    int a = 0;
    int b;

    b=++a; // a=1 b=1 a加完之後再賦值給b
    printf("++a, a=%d, b=%d\n", a, b);
    b=a++;// a=2 b=1  a先賦值給b 再++
    printf("a++, a=%d, b=%d\n", a, b);
    return 0;
}
