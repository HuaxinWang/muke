#include <iostream>
using namespace std;

class Coordinate
{
public:
    Coordinate()
    {
        cout << "Coordiante()\n";
    }
    ~Coordinate()
    {
        cout << "~Coordinate()\n";
    }

    int m_iX;
    int m_iY;
};
int main(void)
{
    Coordinate coor[3];
    coor[0].m_iX = 3;
    coor[0].m_iY = 5;

    Coordinate *p = new Coordinate[3];
    p->m_iX = 7;
    p[0].m_iY = 9;

    p++;//p = p + 1 p += 1;
    p->m_iX = 11;
    p[0].m_iY = 13;

    p[1].m_iX = 15;
    p++;
    p->m_iY = 17;

    for(int i = 0;i < 3;i++)
    {
        cout << "coor_x" << coor[i].m_iX << endl;
        cout << "coor_y" << coor[i].m_iY << endl;
    }

    for(int i = 0;i < 3;i++)
    {
        cout << "p_x" << p->m_iX << endl;
        cout << "p_y" << p->m_iY << endl;
        p--;
    }

    p++;
    delete []p;
    p = NULL;

    return 0;
}
