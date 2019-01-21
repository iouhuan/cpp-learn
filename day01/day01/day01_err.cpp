/**
 * 为什么要有成员函数？
 * 下面的area输出时，并不会重新计算， 在对象生成的时候area被计算了一次(m_r是随机值)
 * 输出area时，只是去对应的内存空间取值，不会重新计算area
 */

#include "pch.h"
#include "iostream"

using namespace std;

class Circle
{
public:
	double m_r;
	double PI = 3.14;
	double area = PI * m_r * m_r;
};

void main04()
{
	Circle c1;

	cout << "请输入C1半径： ";
	cin >> c1.m_r;

	cout << "C1的面积是" << c1.area << endl;	// 输出是一个很大的值：C1的面积是2.69013e+124

	system("pause");
}