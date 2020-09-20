//
// Created by Genes on 2020/9/12.
//


#include<cstdio>

int main() {
    float r, c, s;
    float pi = 3.141526;
    printf("请输入圆半径r:");
    scanf("%f", &r);
    c = 2 * pi * r;
    s = pi * r * r;
    printf("圆周长为：c=%6.2f\n", c);
    printf("圆面积为：s=%6.2f\n", s);
    return 0;
}
