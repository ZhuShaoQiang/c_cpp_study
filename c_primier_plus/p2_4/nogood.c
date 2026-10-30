// 这里是修改后的代码

#include<stdio.h>

int main(void) {
    int n, n2, n3;  // ERR1: 这里不用多次写int

    /* 这里的注释收尾符号没了  */
    n = 5;
    n2 = n*n;
    n3 = n2*n2;

    printf("n = %d, n squared = %d, n2 squared = %d\n", n, n2, n3);  // 这里少个 ;，并且文字释义解释错误, n2*n2是n的四次方

    return 0;
}
