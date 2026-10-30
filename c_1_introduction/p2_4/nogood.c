// 这里是修改后的代码

#include<stdio.h>

int main(void) {
    int n, n2, n3;  // ERR1: 这里不用多次写int

    /* 这里的注释收尾符号没了  */
    n = 5;
    n2 = n*n;
    n3 = n2*n2;

    printf("n = %d, n squared = %d, n cubed = %d\n", n, n2, n3);  // 这里少个 ;

    return 0;
}
