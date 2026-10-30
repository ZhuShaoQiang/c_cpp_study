#include<stdio.h>

int main(void){

    int num = 0;  // 初始化的时候给一个 0 值是一个好习惯，如 float给0.0，bool给false，指针给NULL
    num = 42;

    printf("I am a simple ");
    printf("computer.\n");
    printf("My favorite number is %d because it is first.\n", num);  // %d 处会填入num的值，因为num是int
    // \n 叫做转移符号，是换行，第一个printf里面没 \n 那么输出就没换行。

    int num2 = 0;  // 初始化的时候给一个 0 值是一个好习惯，如 float给0.0，bool给false，指针给NULL，但是为了兼容期间，最好还是放在头部
    num2 = 4242;

    printf("new c can declaration var everywhere!\n");  // %d 处会填入num的值，因为num是int

    // 主函数的返回值，返回给了系统，系统可以读取到
    return 0;  // 返回值证明了程序的运行状态，0是正常运行，1-255是有错误
}

/*
编译程序
gcc -o c_1_introduction/p2_1/main c_1_introduction/p2_1/main.c 

运行程序
./c_1_introduction/p2_1/main 

输出：
I am a simple computer.
My favorite number is 42 because it is first.
new c can declaration var everywhere!
*/
