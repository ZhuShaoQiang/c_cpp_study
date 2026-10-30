#include<stdio.h>

// 第一个void，代表没有返回值。第二个void代表没有参数
void butler(void);  /*声明第二个函数*/

int main(void) {
    printf("I will summon the butler function.\n");
    butler();  // 调用这个函数
    printf("Yes. Bring me some tea and writeable DVDs.\n");

    return 0;
}

// 这里是第二个函数的实现。
void butler(void) {

    printf("You rang, sir?\n");

}
