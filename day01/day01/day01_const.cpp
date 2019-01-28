#include "pch.h"
#include <iostream>

using namespace std;

/**
 * C++、C中的const对比，C中是const变量，C++中是const常量
 */


/**
 * C语言中的const变量：是只读变量（其实可以修改的），有自己的存储空间
 * C++中cosnt常量：可能分配空间， 也可能不分配空间（只在符号表中）
 *    当const常量为全局，并且需要在其他文件中使用时，会分配
 *    当使用&操作符，取const常量地址时，会分配
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
 * const分配内存的实际：编译器编译期间,扫描完之后分配内存
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
 * 内存分配的顺序：采用了内存地址递减的方式，所以下面j的地址比i要靠前（i先分配，但是是递减，所以j靠前）
 * 在局部变量分配空间的顺序跟变量的声明顺序直接相关，同时按照内存由高到低的顺序进行空间分配。
 * 局部变量存储在栈中
 * 无论局部变量显示初始化，或者未初始化，都只有当定义它们的程序块被调用时（即执行时），才分配空间，声明或定义时并不分配
 */
void main08()
{
	int i, j;
	cout << &i << ", " << &j << endl;
}

/**
 * const 和#define的区别和相同之处
 * 不同之处：
 *    const常量由编译器处理的，提供类型检查和作用域检查
 *    宏定义由预处理器处理，单纯的文本替换
 */
#define d 10
void main()
{
	//int a = 10;
	//int b = 20;
	//int arrA[a + b];		//C++中不支持这写法，linux可以

	const int c = 20;
	//const int d = 10;		//和#deinfe d 10一样
	int arrB[c + d];

	system("pause");


}

/**
 * 作用域检查
 */
void fun1()
{
	#define a 10
	const int b = 20;
	//#undef a					//可以通过#undef卸载宏
}

void fun2()
{
	printf("a = %d\n", a);		//这句是可以的，宏定义是全局的
	//printf("b = %d\n", b);	//有作用域，不能使用fun1中的b
}