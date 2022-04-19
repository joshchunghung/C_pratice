#include <stdio.h>
int main()
{
    // sizeof 看值或是型別佔記憶體的空間 (byte) 1 byte=8bits
    // 每個bit可以存一個1或0
    // 1.2345 * 10^2 : 只要存123(有效三位)2(指數)就可以表示
    // float 用誤差去換取更多的可儲存數字
    // float 用23bit存有效位數，約為六位數，8個bit存指數
    // double 用52bit存有效位數，約為15位數，11個bit存指數
    printf("sizeof int is %lu. \n", sizeof(int));
    printf("sizeof long int is %lu. \n", sizeof(long int));
    printf("sizeof long long int is %lu. \n", sizeof(long long int));
    printf("sizeof float is %lu. \n", sizeof(float));
    printf("sizeof double is %lu. \n", sizeof(double));
    return 0;
}