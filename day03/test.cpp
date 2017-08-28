#include <iostream>
using namespace std;

class Coordinate
{
public:
    Coordinate(int x,int y)
    {
        m_iX = x;
        m_iY = y;
        cout << "Coordiante()" << m_iX << ',' << m_iY << endl;
    }
    ~Coordinate()
    {
        cout << "~Coordinate()" << m_iX << ',' << m_iY << endl;
    }

    int m_iX;
    int m_iY;
};

class Line
{
public:
    Line(int x1,int y1,int x2,int y2)
        :m_coorA(x1,y1),m_coorB(x2,y2)
    {
        cout << "Line()" << endl;
    }
    ~Line()
    {
        cout << "~Line()" << endl;
    }
    Coordinate m_coorA;
    Coordinate m_coorB;
    void printfInfo()
    {
        cout << "(" << m_coorA.m_iX << "," << m_coorA.m_iY << ")" 
            << "(" << m_coorB.m_iX << "," << m_coorB.m_iY << ")" << endl;
    }
};

int main(void)
{
    Line *p = new Line(1,2,3,4);
    p->printfInfo();
    delete p;
    p = NULL;

    return 0;
}
