#include <iostream>
using namespace std;

class Array
{
public:
    Array(int count)
    {
        m_iCount = count;
        m_pArr = new int[m_iCount];
        for(int i = 0;i < m_iCount;i++)
        {
            m_pArr[i] = i;
        }
        cout << "Array()" << endl;
    }
    Array(const Array &arr)
    {
    
        m_iCount = arr.m_iCount;
        m_pArr = new int[m_iCount];
        for(int i = 0;i < m_iCount ;i++)
        {
            m_pArr[i] = arr.m_pArr[i];
        }
        cout << "Array(const Array &arr)" << endl;
    }
    ~Array()
    {
        delete []m_pArr;
        m_pArr = NULL;
        cout << "~Array()" << endl;
    }
    void setCount(int count)
    {
        m_iCount = count;
    }
    int getCount()
    {
        return m_iCount;
    }
    void printAddr()
    {
        cout << "m_pAddr的值是: " << m_pArr << endl;
    }
private:
    int m_iCount;
    int *m_pArr;

};

int main(void)
{
    Array arr1(5);

    Array arr2(arr1);

    arr1.printAddr();
    arr2.printAddr();
    return 0;
}
