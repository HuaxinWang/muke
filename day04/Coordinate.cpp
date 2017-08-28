#include <iostream>
using namespace std;
class Coordinate
{
    
public:
	Coordinate(int x,int y)
        :m_iX(x),m_iY(y)
	{
	}
	// 打印坐标的函数
	void printInfo()  
	{
	    cout << "(" << m_iX << ',' << m_iY << ")" << endl;
	}
public:
	int m_iX;
	int m_iY;
};
int main(void)
{
	//定义对象数组
    Coordinate coorArr[2] = {{1,2},{3,4}};


	//遍历数组，打印对象信息
	for(int i = 0; i < 2; i++)
	{
		coorArr[i].printInfo();
	}	
	return 0;
}
