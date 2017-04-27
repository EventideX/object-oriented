/******************************************************************************
�ļ�����circle.cpp
���ߣ�������  ���ڣ�2017/04/26
������Circle��ͷ�ļ�
���ܣ�����Circle
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