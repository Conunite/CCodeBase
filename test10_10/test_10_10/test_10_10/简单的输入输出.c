#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
	函数用于简化代码，减少代码冗余！
*/
int ADD(int x, int y) {
	int z = 0;
	 z = x + y;
	return z;
}


int main()
{
	int num1 = 0;
	int num2 = 0;
	printf("请输入两个数字，已完成运算:\n");
	scanf("%d %d", &num1, &num2);
	int sum = ADD(num1,  num2);
	printf("输出的值是%d\n", sum);
}