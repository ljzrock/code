#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"add.h"

int main()
{
	int a, b;
	int sum;
	printf("�������һ����\n");
	scanf("%d", &a);
	printf("������ڶ�����\n");
	scanf("%d", &b);
	sum = add(a, b);
	printf("sum= %d\n", sum);
	return 0;
}
//�ܽ�Ժ���Ҫ������ Ȼ����ʹ��  ����Ĵ�������ͺ��� �Ѻ���������ֿ� 
// ����ͷ�ļ��������������
// ����add.c�ļ���ʵ�ֺ��� ��������֮�������������� 
// ��test1.c�ļ����� #include"add..h"�������ʹ�addͷ�ļ�����ʹ��add����
//{
//	int a = 10;
//	int* p = &a;
//	*p = 20;
//	printf("%d\n", a);
//	return 0;
//
//
//}
//{
//	int i;
//	for (i = 1; i <= 10; i++)
//	{
//		printf("\n");
//		printf("%d ", i);
//	}
//	return 0;
//
//}
