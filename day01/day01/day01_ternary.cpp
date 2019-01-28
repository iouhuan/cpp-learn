#include "pch.h"
#include "iostream"

using namespace std;

/**
 * C++、C中的三目运算对比，作为运算的左值(在等号左边)
 */

void main05()
{
	int a = 10;
	int b = 20;

	// C++中，三目运算(a < b ? a : b)返回的是变量a(变量的内存空间地址)，而在C中，返回的是a的值10，所以该代码在C中是不能编译通过的
	// 在C中，用地址来替换*(a < b ? &a : &b), 下面两行代码是相同的
	// C++编译器帮我们完成了取地址的操作
	(a < b ? a : b) = 30;
	//*(a < b ? &a : &b) = 30;

	printf("a = %d, b = %d \n", a, b);		

	system("pause");

}