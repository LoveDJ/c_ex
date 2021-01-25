#include <iostream>
#include <string>
#include <time.h>
using namespace std;

/*
	hello world
*/
void p2()
{
	cout << "Hello World!" << endl;
}

/*
	注释:单行注释，多行注释
*/
void p3()
{
	// 单行注释
	
	/*
		多行
		注释
	*/
}

/*
	变量的使用，变量的意义
*/
void p4()
{
	/* 
		变量的使用: 数据类型 变量名 = 变量初始值
		变量的意义：给一段制定的内存起名，方便管理内存
	*/
	int a = 10;
	cout << "a=" << a << endl;
}

/*
	两种常量定义
*/
void p5()
{
	/* 
		常量：不可更改的数据
		1.宏常量
		#define 常量名 常量值
		#define Day 7

		2.const变量
		const int Month = 12;
	*/
	const int Month = 12;
	cout << "一年总共有" << Month << "个月份" << endl;
}
/*
	标识符命名规则
*/
void p7()
{
	/*
		标识符命名规则：
		1. 不能是关键字
		2. 只能是字母、数字、下划线构成
		3. 不能以数字开头
		4. 区分大小写
	*/
	int abc = 10;
	int _abc = 10;
	int _123abc = 10;
	//int 12ab = 10;
}
/*
	数据类型-整型
*/
void p8()
{
	/*
		1. 数据类型存在的意义：给变量分配合理的内存空间（避免空间浪费）
		2. 四种整型类型：short(2字节) int（4字节） long（4字节） long long（8字节）
	*/
	short a = 10;
	int b = 10;
	long c = 10;
	long long d = 10;
}

/*
	sizeof关键字
*/
void p9()
{
	/*
		sizeof(数据类型/变量)
	*/
	cout << "short类型占用的空间:" << sizeof(short) << endl;
	short a = 10;
	cout << "short类型占用的空间:" << sizeof(a) << endl;
}

/*
	浮点型
*/
void p10() 
{
	/*
		1. float(4字节) 7位有效数字
		2. double(8字节) 15-16位有效数字
	*/
	float f1 = 3.14f;
	double d1 = 3.14;

	//科学计数法
	int i2 = 3e2; //3 * 10^2 = 300
	float f2 = 3e-2; //3 * 10^(-2) = 0.03 
}

/*
	字符型
*/
void p11()
{
	/*
		1. 占用1个字节
		2. 字符型变量并不是把字符本身放到内存，而是将对应的ASCII编码放到存储单元
	*/
	char ch = 'a';

	//重要ASCII码值
	// a:97  A:65
	cout << (int)ch << endl;
}

/*
	转移字符
*/
void p12()
{
	cout << "hello world\n"; //换行符
	cout << "\\" << endl; //输出反斜杠
	cout << "aaa\tbbb" << endl; //制表符 8个位置 作用：对齐文本
}

/*
	字符串类型
*/
void p13()
{
	/*
		1. C风格字符串
		2. C++风格字符串
	*/
	char str[] = "abc";
	string str2 = "def";//需要包含头文件
	cout << str << endl;
}

/*
	布尔类型
*/
void p14()
{
	/*
		1. 只占用1个字节大小
	*/
	bool flag = true;
	bool flag2 = false;
}

/*
	数据的输入cin
*/
void p15()
{
	//整型
	int a = 0;
	cout << "请输入数字a：" << endl;
	cin >> a;
	cout << "a=" << a << endl;
	//字符型
	char ch = 'a';
	cout << "请输入字符型ch:" << endl;
	cin >> ch;
	cout << "ch=" << ch << endl;
	//字符串
	string str = "hello";
	cout << "请给字符串 str赋值:" << endl;
	cin >> str;
	cout << "str=" << str << endl;
	//布尔数据类型
	bool flag = false;
	cout << "请给布尔数据类型flag 赋值：" << endl;
	cin >> flag;//需要输入 0 或者 1
	cout << "flag" << flag << endl;
}

/*
	运算符
*/
void p16()
{
	/*
		1. 算数运算符 + - * / %
		2. 赋值运算符
		3. 比较运算符
		4. 逻辑运算符
		*5. 位运算符
	*/
}
/*
	递增递减符
*/
void p18()
{
	//1. 前置递增
	int a = 0;
	++a;
	//2. 后置递增
	int b = 10;
	b++;
	//3. 区别 前置变量先加后运算；后置变量先运算后加
	int a2 = 10;
	int b2 = ++a2 * 10;//110
	cout << "a2=" << a2 << " b2=" << b2 << endl;
	int a3 = 10;
	int b3 = a3++ * 10;//100 
	cout << "a3=" << a3 << " b3=" << b3 << endl;

}

/*
	赋值运算符
*/
void p19()
{
	/*
		=;+=;-=;*=;/=;%=;
	*/
}

/*
	比较运算符
*/
void p20()
{
	/*
		用于表达式的比较，并返回一个布尔值
		== != < > <= >=
	*/
}

/*
	逻辑运算符 &&  || !
	注意：在C++中0为false，非0都为true
*/
void p21()
{
	int a = 10;
	cout << !a << endl;
}

/*
	程序流程结构：
	1. 顺序结构
	2. 选择结构
	3. 循环结构
*/
void p24()
{
	/*
		顺序结构-if:
		1. 单行 if
		2. 多行 if else
		3. 多条件 if else if else
	*/

	int a = 10;
	//单行if
	if ( a > 10 )
	{
		cout << "单行if" << endl;
	}

	//多行
	if ( a > 10 )
	{
		cout << "多行if" << endl;
	}
	else
	{
		cout << "多行else" << endl;
	}

	//多条件
	if (a > 50)
	{
		cout << "多条件1" << endl;
	}
	else if (a > 25)
	{
		cout << "多条件2" << endl;
	}
	else
	{
		cout << "多条件else" << endl;
	}
}

/*
	三目运算符 表达式1 ? 表达式2 : 表达式3
*/
void p29()
{
	int a = 10;
	int b = 20;
	int c = 0;
	c = (a > b ? a : b);
	cout << "c=" << c << endl;

	//三目运算符返回的是变量，可以继续赋值
	(a > b ? a : b) = 100;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	cout << "c=" << c << endl;
}

/*
	switch多条件分支语句
*/
void p30()
{
	//给电影打分
	int score = 0;
	cout << "请给该部电影打分(1-10)：" << endl;
	cin >> score;
	switch (score)
	{
	case 10:
		cout << "经典电影";
		break;
	case 9:
		cout << "经典电影";
		break;
	case 8:
		cout << "非常好的电影";
		break;
	case 7:
		cout << "非常好的电影";
		break;
	default:
		cout << "一般的电影";
		break;
	}
	/*
		if和switch的区别：
		1. switch判断不能是一个区间，只能是一个整型或者字符
		2. switch结构清晰
	*/
}

/*
	循环结构-while
	随机数
*/
void p31()
{
	//猜数字游戏
	//添加随机数种子，利用系统当前时间生成随机数，防止每次随机数都一样
	srand((unsigned int)time(NULL));
	//1. 生成随机数1-100的随机数
	int num = rand() % 100 + 1; // rand()%100 生成0-99的随机数 
	//2. 玩家猜测
	int val = 0;
	while (1)
	{
		cin >> val;
		//3. 判断
		if (val < num)
		{
			cout << "猜小了" << endl;
		}
		else if (val > num)
		{
			cout << "猜大了" << endl;
		}
		else
		{
			cout << "猜中了" << endl;
			break;
		}
	}
	

}

/*
	do-while循环
*/
void p33()
{
	int num = 0;
	do
	{
		cout << num << endl;
		num++;
	} while (num < 10);
}

/*
	输出所有的水仙花数，水仙花数是一个三位数，每位的3次幂之和为该数本身
*/
void p34()
{
	int num = 100;
	while(num<1000)
	{
		int a = num % 10;
		int b = num / 10 % 10;
		int c = num / 100;
		if (a * a * a + b * b * b + c * c * c == num)
		{
			cout << num << endl;
		}
		num++;
	}
}

/*
	break:
		1. 出现在switch语句中
		2. 出现在循环语句中，跳出循环
		3. 出现在嵌套循环中，跳出当前循环
*/
/*
	continue:
		跳过本次循环，进行下一次循环
*/
/*
	goto:


void p41()
{
	cout << "1.xxx" << endl;
	cout << "2.xxx" << endl;
	goto FLAG;
	cout << "3.xxx" << endl;
	cout << "4.xxx" << endl;
	FLAG;
	cout << "5.xxx" << endl;
}
*/

/*
	数组：
		1. 连续空间
		2. 相同数据类型
*/
void p42()
{
	//第一种定义方式
	int arr[5];
	arr[0] = 0;
	arr[1] = 1;
	arr[2] = 2;
	arr[3] = 3;
	arr[4] = 4;
	//第二种定义方式
	int arr2[5] = { 0, 1, 2, 3, 4 };
	//第三种定义方式
	int arr3[] = { 0, 1, 2, 3, 4, 5, 6 };//如何知道该数组的长度
}

/*
	数组名称的用途：
		1. 统计数组在内存的长度 sizeof(数组名)
		2. 获取数组在内存中的首地址
*/
void p43()
{
	int arr[5] = { 1,2,3,4,5 };
	int len = sizeof(arr) / sizeof(arr[0]);
	cout << "数组占用的内存空间=" << sizeof(arr) << endl;//每个int元素4字节，一共5个，共20个字节
	cout << "数组的长度=" << len << endl;

	//首地址
	cout << "数组首地址：" << arr << endl;
	cout << "数组第一个元素的地址：" << &arr[0] << endl;
	cout << "数组第二个元素的地址：" << &arr[1] << endl;
}

/*
	冒泡排序   
*/
void p46()
{
	int arr[10] = { 4, 6, 2, 8, 1, 3, 7, 5, 0, 9 };
	cout << "排序前：" << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	//进行冒泡排序
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 10 - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{     
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	cout << "排序后：" << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << " ";
	}
}

/*
	二维数组定义
*/
void p47()
{
	int arr[2][3];
	int arr2[2][3] = 
	{ 
		{1, 2, 3},
		{4, 5, 6}
	};//推荐
	int arr3[2][3] = { 1,2,3,4,5,6 };
	int arr4[][3] = { 1,2,3,4,5,6 };
}

int main2()
{
	p46();
	return 0;
}


