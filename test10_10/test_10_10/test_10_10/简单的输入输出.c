#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
	�������ڼ򻯴��룬���ٴ������࣡
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
	printf("�������������֣����������:\n");
	scanf("%d %d", &num1, &num2);
	int sum = ADD(num1,  num2);
	printf("�����ֵ��%d\n", sum);
}