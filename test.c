#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main()
{
	int i, n, sum = 1;
	printf("请输入数值n：");
	scanf("%d", &n);
	printf("\n");
	for (i = 1; n >= i; i++)
		sum *= i;
	printf("n的阶乘是：%d\n", sum);
	
	return 0;
}





//#include<stdio.h>
//int main()
//{
//	int i = 1, n, sum = 1;
//	printf("请输入你n的值：");
//	scanf("%d", &n);
//	while(n>=i)                  //while循环表达式后面千万不要写分号 不然下面的循环体就不执行了
//	{
//		sum *= i;
//		i++;
//	}
//		printf("%d的阶乘是%d \n",n, sum);	
//    return 0;
//}





//#include<stdio.h>
//int main()
//{
//	//复合赋值运算符，它的运算顺序是从右往左计算 
//	//因为计算是连续的，a结果一直保持上一次执行的结果。
//	int a;
//	a = 7;
//	a += a *= a /= a - 5;               //先算a/=a-5 =》a=（a/(a-5)）;a的结果为3(因为a的数据类型是整型，结果自动转换成整形结果)
//	printf("结果为：%d\n", a);          //第二次计算的是a*=a/=a-5   => a*=3  => a=3*3=9
//	return 0;                           //第三次计算的是 a+=a *= a /= a - 5  =》a+=9 =》a=9+9=18;
//}                                     //最终结果为18；
// 




//#include<stdio.h>
//int main()
//{
//	int n;
//	n = ((1 + 2, 3), 9);
//	printf("((1 + 2, 3), 9)=%d\n", n);
//	return 0;
//}
// 
//#include<stdio.h>
//int main()
//{
//	//逗号表达式也称为顺序求值运算符
//	int y = 3, x = 3, z = 1;
//	printf("结果为：\n%d,%d,%d\n", (++x, y++), z + x + y + 2);//这个是逗号表达式在实际中没有必要这样
//	return 0;
//}




//#include<stdio.h>
//int main()
//{
//	int a, t;
//	printf("请输入星期几：\n");
//	scanf("%d", &a);
//	printf("请输入时间：\n");
//	scanf("%d", &t);
//	if ((a == 2)||(a == 5) && (11 >= t >= 10)||(15 >= t >= 14))
//	{
//		printf("恭喜你，可以参加手机店打折活动\n");
//
//	}
//	else
//	{
//		printf("抱歉，您还不能参加我们的活动\n");
//	
//	}
//	return 0;
//}





//#include<stdio.h>
//int main()
//{
//	float h;
//	int age;
//	printf("请输入你的身高：\n");
//	scanf("%f", &h);
//	printf("请输入你的年龄：\n");
//	scanf("%d",  &age);
//	if (age >= 25 && h >= 1.7)
//	{
//		printf("恭喜你通过了本公司的初选，请您及时到本公司参加面试和笔试。\n");
//
//	}
//
//	else
//	{
//		printf("抱歉，您不符合我们公司的要求！\n");
//
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	//定义变量，分别表示半径、母线、孤长、圆锥侧面积、扇形面积
//	double radius = 2.0f, L1 = 3.0f, L2 = 3.5f, cone, sector;
//	cone = 3.14 * L1 * radius;   //计算圆锥侧面积
//	sector = 0.5 * L2 * radius;  //计算扇形面积
//	if (cone > sector)         //如果圆锥侧面积比扇形面积大
//	{
//		printf("圆锥的面积比扇形的面积大\n");             //输出对应提示信息
//	}
//	if (cone < sector)                                 //如果圆锥侧面积比扇形面积小
//	{
//		printf("圆锥的面积比扇形的面积小\n");         //输出对应提示信息
//	}
//	if (cone == sector)                                //如果圆锥侧面积与扇形面积相等
//	{
//		printf("圆锥的面积比扇形的面积一样大\n");    //输出对应提示信息
//	}
//	printf("圆锥的侧面积是%.2lf平方厘米\n", cone);     //输出圆锥侧面积
//	printf("扇形的面积是%.2lf平方厘米\n", sector);    //输出扇形面积
//	return 0;                                          //程序结束
//}


//{
//	int i = 70;
//	int a, b, c;
//	a = --i;
//	printf("剩余停车位数：%d\n", a);
//	b = --a;
//	printf("剩余停车位数：%d\n", b);
//	c = --b;
//	printf("剩余停车位数：%d\n", c);
//	return 0;
//}
//{
//	int a = 156;
//	printf("观众投票后丫头得%d票\n", a);
//	int b, c, d;
//	b = ++a;
//	printf("导师一投给丫头之后得%d票\n", b);
//	c = ++b;
//	printf("导师二投给丫头之后得%d票\n", c);
//	d = ++c;
//	printf("导师三投给丫头之后得%d票\n", d);
//	return 0;
//}




//#include<stdio.h>
//int main()
//{
//	int v1 = 0 / 3600, v2 = 100000 / 3600;//定义两个变量将速度单位由km/h转成m/s
//	float t = 8.7;
//	double a;
//	a = (v2 - v1) / t;
//	printf("加速度是：a=%f\n", a);
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//     int  a = 7/-4;
//	printf("%f\n", a);//结果是-1 系统只会向零取整，取整后向0靠拢 
//
//	return 0;
//}






//#include<stdio.h>
//int main()
//{
//	//数据强制类型转换 注意浮点型数据转整型数据会造成数据丢失 
//	float a = 37.5f;
//    int  b = (int)a+1;
//	printf("您的脚是 %.1f 码的尺寸\n", a);
//	printf("您应该买 %d 码的鞋子\n", b);
//
//
//	return 0;
//}




//#include<stdio.h>
//int main()
//{
//	                                    //数据自动类型转换实例
//	float a = 313.04f;
//	int b = a;                          //这里把浮点数a赋值给整型变量b，系统自动进行了数据转换，值得注意的是
//                                        //这种自动转换就导致了原有的数据丢失了 ，使得数据步准确 ，作为程序员以后这种转换一定要看清楚
//	printf("实际付款为:%.2f元\n", a);   // 对于不同类型的数据需要有相应的格式输出 浮点型%f
//	printf("抹零后支付：%d元\n", b);    //   整型数据 %d格式输出 
//	return 0;
//}



//void nul()
//{
//static int m = 3;
//	m *= 3;
//	printf("%d\n", m);
//
//}
//int main()
//{
//	int a = 0;
//	while (a <= 5)
//	{
//		nul();
//	     a++;
//	}
//	return 0;
//}





//void park()
//{
//	static sum = 3625;
//	sum--;
//	printf("进入一辆车，此时的停车位剩：%d个\n", sum);
//}
//int main() 
//{
//	int m=0;
//while(m<5)
//	{
//		park();
//		m++;
//	}
//	return 0;
//}
//int main()
//{
//	extern int i;       //extern他是调用外部的存储变量 但是必须是同一个项目中不同的c文件里调用的 
//	printf("%d\n", i);  //这里的extern调用test1.c文件中的整型i变量 
//	return 0;
//}




//void test()
//{
//	static int a = 1;                 //static修饰的变量 在语句块执行期间，static变量将始终保持其值不变 ，并且初始化操作   
//	a++;                              //只在第一次执行起作用 在随后的运行过程中变量将保持上一次执行的值
//	printf("a=%d\n", a);
//}                                     //此段代码执行的结果为 2 3 4 5 6 而将static注释掉后则结果变为 2 2 2 2 2 
//int main()
//{
//                                            
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//	     i++;
//
//	}
//	return 0;
//}
  //变量存储类别 auto变量（自动变量 ）     static变量（静态变量）
 //register变量（寄存器变量）             extren变量（外部存储变量） 
  //auto变量用的很少 可以省略 在不特指情况下，局部变量的存储方式都默认为auto型的
 //重点掌握 static变量 register变量 extren变量 以及它们概念和用法
 //static变量是静态变量 存储在静态存储区中的，只在自己作用域内有效 ，出了作用域无效了 ， 并且 其与#define定义常量有很大区别 最大的区别是static是局部变量 
  //而#define定义是常变量和宏 是全局变量 这个是最大的区别  它的作用域是整个工程都有效。



//int main()
//{
//	char sex = 'M';
//	int 	age = 31;
//	float h = 1.68, w = 59.4;
//	printf("大毛的基本信息是：\n");
//	printf("年龄是：%d岁，性别是是：%c\n", age, sex);
//	printf("身高是：%f米，体重是：%f千克", h, w);
//
//
//	return 0;
//}
//{
//	char c1, c2;
//	int i1, i2;
//	c1 = 'a', c2 = 97;
//	i1 = 'a', i2 = 97;             //字符型变量在ASCLL码表中都有一个无符号整型数与其相对应 
//	printf("c1=%d\n", c1);         //这段代码展示了字符型变量和整型变量可以相互转换 
//	printf("c2=%c\n", c2);         //并且要想输出字符型数据要用”%c“格式进行格式输出
//	printf("i1=%d\n", i1);         //字符串的定义和输出
//	printf("i2=%c\n", i2);         // 
//
//	return 0;
//}








//int main()
//{
//	long double f;
//	f = 22.794;
//	printf("火星距离太阳的距离有%f亿千米\n", f);


	/*double d, h,v,res;
	d = 50;
	h = 15;
	v = 3.14 * (d / 2) * (d / 2) * h;
	printf("该粮仓体积为：%f立方米\n", v);
	res = v * 896;
	printf("该粮仓能够存储%f千克的粮食\n", res);*/

	//float result;
	//result = 1000 + 0.0295 * 1000;
	//printf("result=%.2f\n", result);
	//字符型常量分为 单精度类型和双精度类型以及长双精度类型 （float double ;long doouble ）三种类型  
	//三种实型类型要选用合适避免选用不恰当导致程序出bug，并且实型数据输出要要用“%f：格式进行格式输出。
//	return 0;
//}



//int main()
//{
//	int i = -2713678;
//	short j = -222;
//	long k = -237894l;//前三个有符号的整型数据的都可以有负号。
//	unsigned int m = 342342;
//	unsigned short n = 787;
//	unsigned long q = 656666l;   //无符号的整型数据只能是正整数，因为C语言规定了无符号整型数据的取值范围。
//	                             //整型数据有这么多类型和不同的取值范围 其目的是为了更好的合理运用数据，
//	                             //并且在一定到那个程度上能够减少资源消耗，使得开发者更加合理使用和分配资源（机器内存）
//                               //所有整型数据都要用“%d”格式进行格式输出 
//	return 0;
//}


//int main()
//{
//	signed int i, j;
//	i = 2147483648;
//	j = 2147483647;
//	printf("有符号整型变量最小值是:-%d\n", i);
//	printf("有符号整型变量最大值是：%d\n", j);
//	return 0;
//}


//#define HOUR 365*24
//int main()
//{
//	int i, result;
//	printf("请输入小时：");
//	scanf("%d", &i);
//	result = i /(HOUR);
//	printf("一共有%d年\n", result);
//	return 0;
//}


//int main()
//{
//	//利用putchar输出Find Day！（putchar是输出字符函数）
//	putchar('(');
//	putchar('-');
//	putchar('(');
//	putchar('o');
//	putchar('o');
//	putchar(')');
//	putchar('-');
//	putchar(')');
//	putchar('\n');
//	return 0;
//}

//{
//	char str[] = "Find Day！";        //puts的功能是将字符串str输出到终端，并且puts函数一次只能够输出一个字符串，字符串中可以是转义字符
//	puts(str);                        //输出字符数组
//	puts("Find Day！");               //输出字符串
//	printf("%s\n", str);              // 这个直接输出字符串数组
//	printf("%s\n", "Find Day！");     //这条代码直接输出字符串 printf函数联合%s可输出多个字符串
//
//	return 0;
//}


//{
//	//利用putchar输出Find Day！（putchar是输出字符函数）
//	putchar('F');
//	putchar('i');
//	putchar('n');
//	putchar('d');
//	putchar('\0 ');
//	putchar('D');
//	putchar('a');
//	putchar('y');
//	putchar('!');
//	putchar('\n');
//	return 0;
//}