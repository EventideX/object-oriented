/******************************************************************************
�ļ�����circle.cpp
���ߣ�������  ���ڣ�2017/04/26
������Circle��
���ܣ��趨Բ�İ뾶������Բ����������Բ�����
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
void Circle::SetRadius(double dRadius) //�趨Բ�İ뾶
{
	m_dRadius = dRadius;
}
double Circle::GetArea() //���Բ�����
{
	m_dArea = PI*m_dRadius*m_dRadius;
	return m_dArea;
}
void Circle::PrintArea() //���Բ�����
{
	printf("The area of the circle is %.2lf\n", m_dArea);
}