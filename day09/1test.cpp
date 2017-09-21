#include <iostream>

using namespace std;

template <typename T>
void display(T a)
{
    cout << a << endl;
}
template <typename T,class S>
void display(T t,S s)
{
    cout << t << endl;
    cout << s << endl;
}
template <typename T,int KSize>
void display(T a)
{
    for(int i=0;i < KSize;i++)
    {
        cout << a << endl;
    }
}

int main(void)
{
    //display<double>(10.99);
    //display<int,double>(5,8.3);
    display<int,5>(6);


    return 0;
}
