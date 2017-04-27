/******************************************************************************
文件名：circle.cpp
作者：许郁杨  日期：2017/04/26
描述：Circle类
功能：设定圆的半径、计算圆的面积、输出圆的面积
*******************************************************************************/
#include"circle.h"
#include<iostream>
#include<cstdio>
using namespace std;

Circle::Circle(double dRadius)
{
	m_dRadius = dRadius;
}
Circle::Circle(Circle &C)
{
	C.m_dRadius = m_dRadius;
}
void Circle::SetRadius(double dRadius) //设定圆的半径
{
	m_dRadius = dRadius;
}
double Circle::GetArea() //求得圆的面积
{
	m_dArea = PI*m_dRadius*m_dRadius;
	return m_dArea;
}
void Circle::PrintArea() //输出圆的面积
{
	printf("The area of the circle is %.2lf\n", m_dArea);
}