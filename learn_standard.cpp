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
	ע��:����ע�ͣ�����ע��
*/
void p3()
{
	// ����ע��
	
	/*
		����
		ע��
	*/
}

/*
	������ʹ�ã�����������
*/
void p4()
{
	/* 
		������ʹ��: �������� ������ = ������ʼֵ
		���������壺��һ���ƶ����ڴ���������������ڴ�
	*/
	int a = 10;
	cout << "a=" << a << endl;
}

/*
	���ֳ�������
*/
void p5()
{
	/* 
		���������ɸ��ĵ�����
		1.�곣��
		#define ������ ����ֵ
		#define Day 7

		2.const����
		const int Month = 12;
	*/
	const int Month = 12;
	cout << "һ���ܹ���" << Month << "���·�" << endl;
}
/*
	��ʶ����������
*/
void p7()
{
	/*
		��ʶ����������
		1. �����ǹؼ���
		2. ֻ������ĸ�����֡��»��߹���
		3. ���������ֿ�ͷ
		4. ���ִ�Сд
	*/
	int abc = 10;
	int _abc = 10;
	int _123abc = 10;
	//int 12ab = 10;
}
/*
	��������-����
*/
void p8()
{
	/*
		1. �������ʹ��ڵ����壺���������������ڴ�ռ䣨����ռ��˷ѣ�
		2. �����������ͣ�short(2�ֽ�) int��4�ֽڣ� long��4�ֽڣ� long long��8�ֽڣ�
	*/
	short a = 10;
	int b = 10;
	long c = 10;
	long long d = 10;
}

/*
	sizeof�ؼ���
*/
void p9()
{
	/*
		sizeof(��������/����)
	*/
	cout << "short����ռ�õĿռ�:" << sizeof(short) << endl;
	short a = 10;
	cout << "short����ռ�õĿռ�:" << sizeof(a) << endl;
}

/*
	������
*/
void p10() 
{
	/*
		1. float(4�ֽ�) 7λ��Ч����
		2. double(8�ֽ�) 15-16λ��Ч����
	*/
	float f1 = 3.14f;
	double d1 = 3.14;

	//��ѧ������
	int i2 = 3e2; //3 * 10^2 = 300
	float f2 = 3e-2; //3 * 10^(-2) = 0.03 
}

/*
	�ַ���
*/
void p11()
{
	/*
		1. ռ��1���ֽ�
		2. �ַ��ͱ��������ǰ��ַ�����ŵ��ڴ棬���ǽ���Ӧ��ASCII����ŵ��洢��Ԫ
	*/
	char ch = 'a';

	//��ҪASCII��ֵ
	// a:97  A:65
	cout << (int)ch << endl;
}

/*
	ת���ַ�
*/
void p12()
{
	cout << "hello world\n"; //���з�
	cout << "\\" << endl; //�����б��
	cout << "aaa\tbbb" << endl; //�Ʊ�� 8��λ�� ���ã������ı�
}

/*
	�ַ�������
*/
void p13()
{
	/*
		1. C����ַ���
		2. C++����ַ���
	*/
	char str[] = "abc";
	string str2 = "def";//��Ҫ����ͷ�ļ�
	cout << str << endl;
}

/*
	��������
*/
void p14()
{
	/*
		1. ֻռ��1���ֽڴ�С
	*/
	bool flag = true;
	bool flag2 = false;
}

/*
	���ݵ�����cin
*/
void p15()
{
	//����
	int a = 0;
	cout << "����������a��" << endl;
	cin >> a;
	cout << "a=" << a << endl;
	//�ַ���
	char ch = 'a';
	cout << "�������ַ���ch:" << endl;
	cin >> ch;
	cout << "ch=" << ch << endl;
	//�ַ���
	string str = "hello";
	cout << "����ַ��� str��ֵ:" << endl;
	cin >> str;
	cout << "str=" << str << endl;
	//������������
	bool flag = false;
	cout << "���������������flag ��ֵ��" << endl;
	cin >> flag;//��Ҫ���� 0 ���� 1
	cout << "flag" << flag << endl;
}

/*
	�����
*/
void p16()
{
	/*
		1. ��������� + - * / %
		2. ��ֵ�����
		3. �Ƚ������
		4. �߼������
		*5. λ�����
	*/
}
/*
	�����ݼ���
*/
void p18()
{
	//1. ǰ�õ���
	int a = 0;
	++a;
	//2. ���õ���
	int b = 10;
	b++;
	//3. ���� ǰ�ñ����ȼӺ����㣻���ñ�����������
	int a2 = 10;
	int b2 = ++a2 * 10;//110
	cout << "a2=" << a2 << " b2=" << b2 << endl;
	int a3 = 10;
	int b3 = a3++ * 10;//100 
	cout << "a3=" << a3 << " b3=" << b3 << endl;

}

/*
	��ֵ�����
*/
void p19()
{
	/*
		=;+=;-=;*=;/=;%=;
	*/
}

/*
	�Ƚ������
*/
void p20()
{
	/*
		���ڱ��ʽ�ıȽϣ�������һ������ֵ
		== != < > <= >=
	*/
}

/*
	�߼������ &&  || !
	ע�⣺��C++��0Ϊfalse����0��Ϊtrue
*/
void p21()
{
	int a = 10;
	cout << !a << endl;
}

/*
	�������̽ṹ��
	1. ˳��ṹ
	2. ѡ��ṹ
	3. ѭ���ṹ
*/
void p24()
{
	/*
		˳��ṹ-if:
		1. ���� if
		2. ���� if else
		3. ������ if else if else
	*/

	int a = 10;
	//����if
	if ( a > 10 )
	{
		cout << "����if" << endl;
	}

	//����
	if ( a > 10 )
	{
		cout << "����if" << endl;
	}
	else
	{
		cout << "����else" << endl;
	}

	//������
	if (a > 50)
	{
		cout << "������1" << endl;
	}
	else if (a > 25)
	{
		cout << "������2" << endl;
	}
	else
	{
		cout << "������else" << endl;
	}
}

/*
	��Ŀ����� ���ʽ1 ? ���ʽ2 : ���ʽ3
*/
void p29()
{
	int a = 10;
	int b = 20;
	int c = 0;
	c = (a > b ? a : b);
	cout << "c=" << c << endl;

	//��Ŀ��������ص��Ǳ��������Լ�����ֵ
	(a > b ? a : b) = 100;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	cout << "c=" << c << endl;
}

/*
	switch��������֧���
*/
void p30()
{
	//����Ӱ���
	int score = 0;
	cout << "����ò���Ӱ���(1-10)��" << endl;
	cin >> score;
	switch (score)
	{
	case 10:
		cout << "�����Ӱ";
		break;
	case 9:
		cout << "�����Ӱ";
		break;
	case 8:
		cout << "�ǳ��õĵ�Ӱ";
		break;
	case 7:
		cout << "�ǳ��õĵ�Ӱ";
		break;
	default:
		cout << "һ��ĵ�Ӱ";
		break;
	}
	/*
		if��switch������
		1. switch�жϲ�����һ�����䣬ֻ����һ�����ͻ����ַ�
		2. switch�ṹ����
	*/
}

/*
	ѭ���ṹ-while
	�����
*/
void p31()
{
	//��������Ϸ
	//�����������ӣ�����ϵͳ��ǰʱ���������������ֹÿ���������һ��
	srand((unsigned int)time(NULL));
	//1. ���������1-100�������
	int num = rand() % 100 + 1; // rand()%100 ����0-99������� 
	//2. ��Ҳ²�
	int val = 0;
	while (1)
	{
		cin >> val;
		//3. �ж�
		if (val < num)
		{
			cout << "��С��" << endl;
		}
		else if (val > num)
		{
			cout << "�´���" << endl;
		}
		else
		{
			cout << "������" << endl;
			break;
		}
	}
	

}

/*
	do-whileѭ��
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
	������е�ˮ�ɻ�����ˮ�ɻ�����һ����λ����ÿλ��3����֮��Ϊ��������
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
		1. ������switch�����
		2. ������ѭ������У�����ѭ��
		3. ������Ƕ��ѭ���У�������ǰѭ��
*/
/*
	continue:
		��������ѭ����������һ��ѭ��
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
	���飺
		1. �����ռ�
		2. ��ͬ��������
*/
void p42()
{
	//��һ�ֶ��巽ʽ
	int arr[5];
	arr[0] = 0;
	arr[1] = 1;
	arr[2] = 2;
	arr[3] = 3;
	arr[4] = 4;
	//�ڶ��ֶ��巽ʽ
	int arr2[5] = { 0, 1, 2, 3, 4 };
	//�����ֶ��巽ʽ
	int arr3[] = { 0, 1, 2, 3, 4, 5, 6 };//���֪��������ĳ���
}

/*
	�������Ƶ���;��
		1. ͳ���������ڴ�ĳ��� sizeof(������)
		2. ��ȡ�������ڴ��е��׵�ַ
*/
void p43()
{
	int arr[5] = { 1,2,3,4,5 };
	int len = sizeof(arr) / sizeof(arr[0]);
	cout << "����ռ�õ��ڴ�ռ�=" << sizeof(arr) << endl;//ÿ��intԪ��4�ֽڣ�һ��5������20���ֽ�
	cout << "����ĳ���=" << len << endl;

	//�׵�ַ
	cout << "�����׵�ַ��" << arr << endl;
	cout << "�����һ��Ԫ�صĵ�ַ��" << &arr[0] << endl;
	cout << "����ڶ���Ԫ�صĵ�ַ��" << &arr[1] << endl;
}

/*
	ð������   
*/
void p46()
{
	int arr[10] = { 4, 6, 2, 8, 1, 3, 7, 5, 0, 9 };
	cout << "����ǰ��" << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	//����ð������
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
	cout << "�����" << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << " ";
	}
}

/*
	��ά���鶨��
*/
void p47()
{
	int arr[2][3];
	int arr2[2][3] = 
	{ 
		{1, 2, 3},
		{4, 5, 6}
	};//�Ƽ�
	int arr3[2][3] = { 1,2,3,4,5,6 };
	int arr4[][3] = { 1,2,3,4,5,6 };
}

int main2()
{
	p46();
	return 0;
}


