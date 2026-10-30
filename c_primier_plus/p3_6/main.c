#include<stdio.h>

// 下面这两个包可以用于可移植类型，保证所有平台中宽度一致
#include<inttypes.h>
#include<stdint.h>

int main(void){

    int32_t me32;  // 32位宽的有符号整型，来自stdint.h

    me32 = 45933945;
    printf("First, assume int32_t is int:");
    printf("me32 = %d\n", me32);
    printf("Next, let's not make any assumptions.\n");
    printf("Instead, use a \"macro\" from inttypes.h: ");
    printf("me32 = %"PRId32"\n", me32);  // PRId32是inttypes里面的内容。就是一个宏定义
    // 宏定义会被原样填入，所以这里被解释为
    // %" "d" "  而C语言中，连续的 字符串 会被合并，从而其实就是  %d

    /*
    First, assume int32_t is int:me32 = 45933945
    Next, let's not make any assumptions.
    Instead, use a "macro" from inttypes.h: me32 = 45933945
    */

    return 0;
}

