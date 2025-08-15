//#include <stdio.h>
//
//#define A (5 + 2)   /* 示例宏，未使用 */
//#define PI 3.14f    /* 圆周率常量 */
//
///* 计算并打印指定半径圆的周长和面积 */
//void circle_area(void) {
//    int r;
//    printf("please enter the radius:");
//    if (scanf("%d", &r) != 1) {
//        printf("Invalid input. Please enter a valid integer.\n");
//        return;
//    }
//    printf("the data you enter is %d\n", r);
//    printf("the length of %d is %.2f\n", r, 2 * PI * r);
//    printf("the area of %d is %.2f\n", r, r * r * PI);
//}
//
///* 演示自增运算符和逗号运算符的使用 */
//int calculate(void) {
//    /* printf("%d\n", A * A); // 5+2*5+2 */
//    int a = 1;
//    int b = (++a) + (++a);
//    int c = (a++, a + 3, ++a); /* c 的值为最后一个表达式的结果 */
//    printf("a = %d, b = %d, c = %d\n", a, b, c);
//    return b;
//}
//
///* 将四位数按位倒序打印 */
//void reverse(void) {
//    int a = 1234;
//    int qw = a / 1000;
//    int bw = a % 1000 / 100;
//    int sw = a % 100 / 10;
//    int gw = a % 10;
//    printf("the reverse is %d%d%d%d\n", gw, sw, bw, qw);
//}
//
///* 交换两个整数的值 */
//void swap(void) {
//    int a = 10, b = 20;
//    int tmp = a;
//    a = b;
//    b = tmp;
//    printf("%d %d\n", a, b);
//}
//
///* 简单的字符输入输出示例 */
//void io(void) {
//    char ch = 'a';
//    printf("ch = %c\n", ch);
//
//    getchar();           /* 读取并丢弃换行符 */
//    ch = getchar();      /* 再读取一个字符 */
//    putchar(ch);
//    printf("\n");
//}
//
//int main(void) {
//    /* circle_area(); */
//    /* calculate(); */
//    /* reverse(); */
//    /* swap(); */
//    io();
//    return 0;
//}
//
///* 
// * Core notes:
// * 1. 示例代码用于演示自增和逗号运算符。
// * 2. 使用 F11/F12 可在调试器中单步或继续运行。
// */
//
