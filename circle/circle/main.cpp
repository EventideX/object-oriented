/******************************************************************************
文件名：main.cpp
作者：许郁杨  日期：2017/04/26
描述：主函数
功能：读入、检测输入数据
*******************************************************************************/
#include"circle.h"
#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
	double dRadius = 0;
	char ifAgain = ' ';
	for (; ; )
	{
		cout << "Please input the radius of the circle: " << endl;
		cin >> dRadius;
		while ((cin.fail()) || (dRadius < 0)) //当输入数据不符合要求时
		{
			cout << "Sorry, it is not a valid value.";
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Please try again:" << endl;
			cin >> dRadius;
		}
		Circle CCir(dRadius);
		CCir.GetArea();
		CCir.PrintArea();
		cout << "Again?(Y/N)" << endl; //询问是否需要再次计算新的圆
		cin >> ifAgain;
		while ((cin.fail()) || ((ifAgain != 'Y') && (ifAgain != 'N'))) //当输入数据不符合要求时
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Sorry, please input 'Y' or 'N': " << endl;
			cin >> ifAgain;
		}
		cout << endl;
		if (ifAgain == 'Y') continue;
		if (ifAgain == 'N') break;
	}
	return 0;
}