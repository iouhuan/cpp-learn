#include "pch.h"
#include <iostream>

using namespace std;

/**
 * C++��C�е�const�Աȣ�C����const������C++����const����
 */


/**
 * C�����е�const��������ֻ����������ʵ�����޸ĵģ������Լ��Ĵ洢�ռ�
 * C++��cosnt���������ܷ���ռ䣬 Ҳ���ܲ�����ռ䣨ֻ�ڷ��ű��У�
 *    ��const����Ϊȫ�֣�������Ҫ�������ļ���ʹ��ʱ�������
 *    ��ʹ��&��������ȡconst������ַʱ�������
 */

void main06()
{
	const int a = 10;
	printf("&a: %d \n", &a);

	int *p = NULL;
	p = (int *)&a;
	printf("p: %d \n", p);

	*p = 20;

	printf("a: %d \n", a);
	printf("*p: %d \n", *p);
}


/**
 * const�����ڴ��ʵ�ʣ������������ڼ�,ɨ����֮������ڴ�
 */
void main07()
{
	int a;
	const int b = 10;
	int c;

	//printf("&a:%d, &b%d, &c:%d", &a, &b, &c);			//&a:19921372, &b19921360, &c:19921348
	//printf("&a:%d, &c:%d, &b:%d", &a, &c, &b);		//&a:13892560, &c:13892536, &b:13892548
	printf("&a:%d, &c:%d", &a, &c);						//&a:7337796, &c:7337772

	system("pause");
}

/**
 * �ڴ�����˳�򣺲������ڴ��ַ�ݼ��ķ�ʽ����������j�ĵ�ַ��iҪ��ǰ��i�ȷ��䣬�����ǵݼ�������j��ǰ��
 * �ھֲ���������ռ��˳�������������˳��ֱ����أ�ͬʱ�����ڴ��ɸߵ��͵�˳����пռ���䡣
 * �ֲ������洢��ջ��
 * ���۾ֲ�������ʾ��ʼ��������δ��ʼ������ֻ�е��������ǵĳ���鱻����ʱ����ִ��ʱ�����ŷ���ռ䣬��������ʱ��������
 */
void main08()
{
	int i, j;
	cout << &i << ", " << &j << endl;
}

/**
 * const ��#define���������֮ͬ��
 * ��֮ͬ����
 *    const�����ɱ����������ģ��ṩ���ͼ�����������
 *    �궨����Ԥ�������������������ı��滻
 */
#define d 10
void main()
{
	//int a = 10;
	//int b = 20;
	//int arrA[a + b];		//C++�в�֧����д����linux����

	const int c = 20;
	//const int d = 10;		//��#deinfe d 10һ��
	int arrB[c + d];

	system("pause");


}

/**
 * ��������
 */
void fun1()
{
	#define a 10
	const int b = 20;
	//#undef a					//����ͨ��#undefж�غ�
}

void fun2()
{
	printf("a = %d\n", a);		//����ǿ��Եģ��궨����ȫ�ֵ�
	//printf("b = %d\n", b);	//�������򣬲���ʹ��fun1�е�b
}