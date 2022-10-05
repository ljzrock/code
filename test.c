#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(viod)
{
	int a = 0;
	int b = 0;
	int sum = 0;
	scanf("%d%d", &a,&b);
	sum = a + b;
	printf("sum= %d\n",sum);
	return 0;
}
//#include<stdio.h>
//int main(void)
//{ 
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf("%d%d", &num1, &num2);
//	sum = num1 + num2;
//	printf("sum=%d\n", sum);
//
//

	/*int i = 0;
	for (i = 1; i <= 20000; i++)//利用for循环 控制i变量
	{
		printf("我爱妈妈%d\n", i);//利用printf函数打印我爱妈妈和行数
	}
	if (i >= 20000) //if语句判断（单向控制）变量i
		printf("拿到好成绩\n");*/
	/*int i = 1;
	while (i <= 20000) //利用while循环来控制i变量 
		printf("我爱妈妈%d\n", i++);
	if (i == 20000) \\if语句判断（单项控制）变量i；==双等号的作用是判断标志，起判断作用
//		printf("拿到好成绩\n");*/
//
//	return 0;
//	
//}