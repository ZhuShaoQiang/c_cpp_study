#include<stdio.h>

int main(void) {

    float weight = 0.0;
    float value = 0.0;  // 定义

    printf("Are you worth your weight in platinum?\n");
    printf("Let's check it out.\n");
    printf("Please enter your weight in pounds: ");

    // 获取用户输入
    scanf("%f", &weight);  // %f 是float的占位符，由于需要给weight赋值，所以需要取地址

    value = 1700.0 * weight * 14.5853;
    
    printf("Your weight in platinum is worth %0.2f.\n", value);
    // %f是 float的占位符，而0.2，意思是，保留两位小数。后期会说明

    /*
    Are you worth your weight in platinum?
    Let's check it out.
    Please enter your weight in pounds: 55
    Your weight in platinum is worth 1363725.50.
    */

    return 0;
}
