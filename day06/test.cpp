#include <iostream>
#include <string>
using namespace std;
class Person
{
public:
    Person(string name = "Jim")
    {
        m_strName = name;
        cout << "Person()" << endl;
    }
    virtual~Person()
    {
        cout << "~Person()" << endl;    
    }
    void play()
    {
        cout << m_strName << endl;
        cout << "Person--play()" << endl;
    }
protected:
    string m_strName;
};

class Soldier:public Person
{
public:
    Soldier(string name = "James",int age = 20)
    {
        m_strName = name;
        m_iAge = age;
        cout << "Soldier()" << endl;
    }
    virtual~Soldier()
    {
        cout << "~Soldier()" << endl;
    }
    void work()
    {
        cout << m_strName << endl;
        cout << m_iAge << endl;
        cout << "Soldier--work()" << endl;
    }
protected:
    int m_iAge;
};
void test1(Person p)
{
    p.play();
}
void test2(Person p)
{
    p.play();
}
void test3(Person p)
{
    p.play();
}

int main(void)
{
    Person p;
    Soldier s;
    test1(p);
    test1(s);
    return 0;
}
