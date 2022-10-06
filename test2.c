#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#define SUM 100000
//int main()
//{
//	float amount, aver, total;
//	int i;
//	for (i = 1, total = 0; i <= 100000; i++)
//	{
//		printf("please enter amount:");
//		scanf("%f", &amount);
//		total = total + amount;
//		if (total >= SUM) break;
//
//	}
//	aver = total / i;
//	printf("num=%d\naver=%10.2f\n", i, aver);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int n;
//	for (n = 100; n < 200; n++)
//	{
//		if (n % 3 == 0)
//			continue;
//		printf("%d ", n);
//		
//	}
//	printf("\n");
//	return 0;
//
//}

//{
//	int f1 = 1, f2 = 1;
//	int i;
//	for (i = 1; i <= 20; i++)
//	{
//		printf("%12d\n%12d\n", f1, f2);
//		if (i % 2 == 0)printf("\n");
//			f1 = f1 + f2;
//		   f2 = f2 + f1;
//	}
//	return 0;
//}
//
//{
//	int f1 = 1, f2 = 1, f3;
//	int i;
//	("%12d\n%12d\n",f1,f2);
//	for (i = 1; i <= 38; i++)
//	{
//		f3 = f1 + f2;
//		printf("%12d\n", f3);
//		
//		f1 = f2;
//		f2 = f3;
//	
//	}
//	printf("\n");
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a[10];
//	int i;
//	for (i = 0; i <=9; i++)
//		a[i] = i;
//	for (i = 9; i>=0; i--)
//	{
//		printf("%d ", a[i]);
//	}
//	printf("\n");
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i;
//	int f[20] = { 1,1 };
//	for (i = 2; i < 20; i++)
//		f[i] = f[i - 2] + f[i - 1];
//	for (i = 0; i < 20; i++)
//	{
//		if (i % 5 == 0) printf("\n");
//		printf("%12d", f[i]);
//	}
//	printf("\n");
//
//	return 0;
//}
