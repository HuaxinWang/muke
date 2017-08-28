#include <iostream>
using namespace std;

class Coordinate
{
public:
private:


};

class Line
{
public:
    Line(int x1,int y1,int x2,int y2)
    {
    
    }
    ~Line()
    {
    
    }
    void setA(int x,int y)
    {
        m_coorA.setX(x);
        m_coorA.setY(y);
    }
    void setB(int x,int y)
    { 
        m_coorB.setX(x);
        m_coorB.setX(x);
    }
    void printfInfo()
    {
        cout << "(" << m_coorA.getX() << "," << m_coorA.getY() << ")" << endl;
        cout << "(" << m_coorB.getX() << "," << m_coorB.getY() << ")" << endl;
    }
private:
    const Coordinate m_coorA;
    Coordinate m_coorB;
};
