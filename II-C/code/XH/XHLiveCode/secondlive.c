#include <stdio.h>

/*
分支，循环语句
Notes:
1. 表达式，结果一定是真（1）或者假（0），非空非零即为真
2. else语句永远都会找离他最近的那一个if语句
3. switch语句的case标签必须是常量表达式，不能是变量且唯一。
   - 表达式的值必须是整数类型或字符类型
   - 可以不写default语句，同时也可以直接执行default
4. while语句是先判断表达式的值是否为真，如果为真则执行循环体，否则跳出循环。
5. do-while语句是先执行循环体，再判断表达式的值是否为真，如果为真则继续执行循环，否则跳出循环。
6. for循环里面，三个表达式都是可以省略的，第二个表达式在循环之前执行，第三个表达式在循环之后执行，表达式三在每次循环结束后都要执行一次。
7. 循环嵌套，常用场景：二维数组的应用
   - 计算乘法表
   - 计算阶乘
   - 计算斐波那契数列
   - 外层循环循环一次，内层循环循环n次，外层循环的每一次都会执行内层循环的所有次数
8. 三目运算符的使用
   - 语法：条件 ? 表达式1 : 表达式2
   - 如果条件为真，则返回表达式1的值，否则返回表达式2的值
9. 循环控制语句
   - break：跳出（当前所有）循环或switch语句
   - continue：跳过当前循环的剩余部分，直接进入下一次循环，结束当前当次循环
   - return：从函数中返回，结束函数的执行
*/

void score() 
{
	int score;
	if (scanf("%d", &score) == 1) {
		printf("You input %d\n", score);
	}
	else {
		printf("Invalid input!\n");
		return;
	}
	if (score > 60) {
		printf("You just pass the exam!\n");
	}
	else if (score >= 90) {
		printf("You pass the exam with distinction!\n");
	}
	else if (score >= 80) {
		printf("You pass the exam with credit!\n");
	}
	else if (score >= 70) {
		printf("You pass the exam!\n");
	}
	else {
		printf("You fail the exam!\n");
	}
	printf("Hello, Second Live!\n");
}

void loop()
{
	int i = 0;
	while (i < 10) {
		printf("%d\n",i);
		i++;
	}
	int j = 10;
	do {
		if (j >= 1) {
			printf("%d\n", j);
		}
		j--;
	} while (j <= 10);
}

void loop1() {
	for (int i = 0; i <= 10; i++) {
		printf("%d\n", i);
	}
}

void drawStars() {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			printf("* ");
		}
		printf("\n");
	}
}

int main()
{
	int a = 5, b = 10, c = 15;
	// printf("%d\n", a > b ? a : c);
	// loop();
	// loop1();
	drawStars();
	return 0;
}
