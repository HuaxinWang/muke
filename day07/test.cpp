#include <iostream>

using namespace std;

class Tank
{
public:
    Tank(char code)
    {
        m_cCode = code;
        s_iCount++;
        cout << "Tank()" << endl;
    }
    ~Tank()
    {
        s_iCount--;
        cout << "~Tank()" << endl;
    }
    void fire()
    {
        cout << "Tank--fire" << endl;
    }
    static int getCount();
private:
    static int s_iCount;
    char m_cCode;
};

static int s_iCount = 0;
int Tank::getCount()
{
    return s_iCount;
}


int main(void)
{
   Tank t1('A');
   cout << t1.getCount() << endl;


    return 0;
}
