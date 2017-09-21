#include <iostream>

using namespace std;

class Coordinate
{
    friend Coordinate operator+(Coordinate &c1,Coordinate &c2)
    {
        Coordinate tmp(0,0);
        tmp.m_iX = c1.m_iX + c2.m_iX;
        tmp.m_iY = c1.m_iY + c2.m_iY;
        return tmp;
    }
    friend ostream &operator<<(ostream &out,Coordinate &coor)
    {
        out << coor.m_iX << "," << coor.m_iY << endl;
        return out;
    }
public:
    Coordinate(int x,int y)
    {
        m_iX = x;
        m_iY = y;
    }
    
   /* Coordinate operator+(Coordinate &c)
    {
        Coordinate tmp(0,0);
        tmp.m_iX = this->m_iX + c.m_iX;
        tmp.m_iY = this->m_iY + c.m_iY;
        return tmp;
    }
    */
    int operator[](int index)
    {
        if(0 == index)
        {
            return m_iX;
        }
        else if(1 == index)
        {
            return m_iY;
        }
    }
    int m_iX;
    int m_iY;
};

int main(void)
{
    Coordinate coor1(1,3);
    Coordinate coor2(2,4);
    Coordinate coor3(0,0);

    coor3 = coor1 + coor2;

    //cout << coor3.m_iX << ',' << coor3.m_iY << endl;
    cout << coor3[0];
    cout << coor3[1];
    return 0;
}
