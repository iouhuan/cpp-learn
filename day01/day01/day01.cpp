// day01.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//


//#include "pch.h"
//#include <iostream>
//
//int main()
//{
//    std::cout << "Hello World!\n"; 
//}

#include "pch.h"
#include "iostream"

using namespace std;

//	Hello world！
void main01()
{
	cout << "hello..." << endl;

	system("pause");
}

//	使用面向过程的方式，计算圆的面积
void main02()
{
	double r = 0;
	double s = 0;

	cout << "请输入圆的半径： ";
	cin >> r;	//接受输入到变量的内容空间中

	cout << "R的值是: " << r << endl;

	s = 3.14 * r * r;
	cout << "圆的面积是： " << s << endl;
	system("pause");
}

// 定义一个自定义数据类型
struct Circle
{
	double m_r;	//	半径
	double m_s;	//	面积
};

class MyCircle
{
public:
	// 成员变量
	double m_r;
	double m_s;
public:
	// 成员函数
	void setR(double r)
	{
		m_r = r;
	}

	double getR()
	{
		return m_r;
	}

	double getS()
	{
		m_s = 3.14 * m_r * m_r;
		return m_s;
	}
};

//	使用面向对象的方式，计算圆的面积
void main03()
{
	MyCircle c1, c2, c3;// 用类定义变量： 对象
	double r;

	cout << "C2的半径随机值是：" << c2.getR() << endl;
	
	cout << "请输入C1的半径： ";
	cin >> r;
	
	c1.setR(r);

	cout << "C1的面积是： " << c1.getS() << endl;
	system("pause");
}


/**
 * 思考
 * 1、类的调用，执行过程分析： 类代码不是一步一步的执行
 * 2、类是一个数据类型，定义一个类，是一个抽象的概念，不会给类分配内存
 * 3、用这个数据类型时，才会分配内存
 * 4、C++编译器是如何处理多个对象及调用成员函数的
*/

