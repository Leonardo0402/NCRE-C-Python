# include<stdio.h>
# define A 5+2
# define PI 3.14

void circle_area()
{
	int r;
	printf("please enter the radius:");
	if (scanf("%d", &r) != 1) {
		printf("Invalid input. Please enter a valid integer.\n");
		return;
	}
	printf("the data you enter is %d\n",r);
	printf("the length of %d is %.2f\n", r, (float)(2 * PI * r));
	printf("the area of %d is %.2f\n", r, (float)(r * r * PI));
}

int calculate()
{
	// printf("%d\n", A * A); // 5+2*5+2
	int a = 1;
	int b = (++a) + (++a);
	int c = (a++, a + 3, ++a); // 最后一个值就是c的值
	printf("a = %d, b = %d, c = %d\n",a, b, c);
	return a, b;
}

void reverse()
{
	int a = 1234;
	int qw = a / 1000;
	int bw = a % 1000 / 100;
	int sw = a % 100 / 10;
	int gw = a % 10;
	printf("the reverse is %d%d%d%d\n",gw, sw, bw, qw);
}

void swap() {
	int a = 10, b = 20;
	int tmp = a;
	a = b;
	b = tmp;
	printf("%d %d\n",a, b);
}

void io() {
	char ch;
	scanf("%c", &ch);
	printf("ch = %c\n", ch);

	getchar();
	ch = getchar();
	putchar(ch);
	printf("\n");
}

int main()
{
	// circle_area();
	// calculate();
	// reverse();
	// swap();
	io();
	return 0;
}



/*
Core: 
1. c++ 先操作，再自增    ++c 先自增，再操作
2. F11 进入函数    F12 执行完并跳过函数
*/