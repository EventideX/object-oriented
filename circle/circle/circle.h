/******************************************************************************
文件名：circle.cpp
作者：许郁杨  日期：2017/04/26
描述：Circle类头文件
功能：声明Circle
*******************************************************************************/
#pragma once

class Circle
{
private:
	double m_dRadius = 0;
	double m_dArea = 0;
	const double PI = 3.14159;
public:
	Circle(double dRadius);
	Circle(Circle &C);
	~Circle(){}
	void SetRadius(double dRadius);
	double GetArea();
	void PrintArea();
};