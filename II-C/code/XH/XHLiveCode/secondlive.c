#include <stdio.h>

/*
��֧��ѭ�����
Notes:
1. ���ʽ�����һ�����棨1�����߼٣�0�����ǿշ��㼴Ϊ��
2. else�����Զ�����������������һ��if���
3. switch����case��ǩ�����ǳ������ʽ�������Ǳ�����Ψһ��
   - ���ʽ��ֵ�������������ͻ��ַ�����
   - ���Բ�дdefault��䣬ͬʱҲ����ֱ��ִ��default
4. while��������жϱ��ʽ��ֵ�Ƿ�Ϊ�棬���Ϊ����ִ��ѭ���壬��������ѭ����
5. do-while�������ִ��ѭ���壬���жϱ��ʽ��ֵ�Ƿ�Ϊ�棬���Ϊ�������ִ��ѭ������������ѭ����
6. forѭ�����棬�������ʽ���ǿ���ʡ�Եģ��ڶ������ʽ��ѭ��֮ǰִ�У����������ʽ��ѭ��֮��ִ�У����ʽ����ÿ��ѭ��������Ҫִ��һ�Ρ�
7. ѭ��Ƕ�ף����ó�������ά�����Ӧ��
   - ����˷���
   - ����׳�
   - ����쳲���������
   - ���ѭ��ѭ��һ�Σ��ڲ�ѭ��ѭ��n�Σ����ѭ����ÿһ�ζ���ִ���ڲ�ѭ�������д���
8. ��Ŀ�������ʹ��
   - �﷨������ ? ���ʽ1 : ���ʽ2
   - �������Ϊ�棬�򷵻ر��ʽ1��ֵ�����򷵻ر��ʽ2��ֵ
9. ѭ���������
   - break����������ǰ���У�ѭ����switch���
   - continue��������ǰѭ����ʣ�ಿ�֣�ֱ�ӽ�����һ��ѭ����������ǰ����ѭ��
   - return���Ӻ����з��أ�����������ִ��
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
