/******************************************************************************
�ļ�����main.cpp
���ߣ�������  ���ڣ�2017/04/26
������������
���ܣ����롢�����������
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
		while ((cin.fail()) || (dRadius < 0)) //���������ݲ�����Ҫ��ʱ
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
		cout << "Again?(Y/N)" << endl; //ѯ���Ƿ���Ҫ�ٴμ����µ�Բ
		cin >> ifAgain;
		while ((cin.fail()) || ((ifAgain != 'Y') && (ifAgain != 'N'))) //���������ݲ�����Ҫ��ʱ
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