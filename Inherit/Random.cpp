#include<iostream>
#include<ctime>
using namespace std;
#define RANDOM(a,b) (rand()%(b-a+1)+a)

class Random
{
public:
	int random() {}
};
class RandomNumber :public Random
{
private:
	bool ifGenerateSeed = false;//标识是否已生成随机数种子
public:
	int random(int down, int up)
	{
		if (!ifGenerateSeed)//如果未生成随机数种子
		{
			ifGenerateSeed = true;
			srand((unsigned)time(NULL));//生成随机数种子
		}
		return RANDOM(down, up);
	}
};
class RandomOperation :public Random
{
public:
	char random(char ifMultiplyDivide)
	{
		int tmp;
		RandomNumber x;
		if (ifMultiplyDivide == 'y')//允许乘除 
		{
			tmp = x.random(1, 4);
			switch (tmp)
			{
			case 1:
			{
				return '+';
				break;
			}
			case 2:
			{
				return '-';
				break;
			}
			case 3:
			{
				return '*';
				break;
			}
			case 4:
			{
				return '/';
				break;
			}
			}
		}
		else//不允许乘除
		{
			tmp = x.random(1, 2);
			switch (tmp)
			{
			case 1:
			{
				return '+';
				break;
			}
			case 2:
			{
				return '-';
				break;
			}
			}
		}
	}
};

int main()
{
	return 0;
}