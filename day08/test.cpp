#include <iostream>

using namespace std;

class Coordinate
{
friend Coordinate &operator-(Coordinate &c)
{
    c.m_iX = -c.m_iX;
    c.m_iY = -c.m_iY;
    return c;
}
public:
    Coordinate(int x,int y)
    {
        m_iX = x;
        m_iY = y;
    }
    int getX()
    {
        return m_iX;
    }
    int getY()
    {
        return m_iY;
    }
    /*Coordinate &operator-()
    {
        m_iX = -m_iX;
        m_iY = -m_iY;
        return *this;
    }*/
private:
    int m_iX;
    int m_iY;
};

int main(void)
{
    Coordinate coor1(1,3);
    cout << coor1.getX() << ',' << coor1.getY() << endl;
    -coor1;
    cout << coor1.getX() << ',' << coor1.getY() << endl;

    return 0;
}
