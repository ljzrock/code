#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"add.h"

int main()
{
	int a, b;
	int sum;
	printf("请输入第一个数\n");
	scanf("%d", &a);
	printf("请输入第二个数\n");
	scanf("%d", &b);
	sum = add(a, b);
	printf("sum= %d\n", sum);
	return 0;
}
//总结对函数要先声明 然后再使用  上面的代码是求和函数 把函数声明拆分开 
// 创建头文件定义和声明函数
// 再在add.c文件中实现函数 这样两步之后函数就声明好了 
// 在test1.c文件中用 #include"add..h"来包含和打开add头文件并且使用add函数
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
