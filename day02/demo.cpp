#include <iostream>
#include <string>
using namespace std;

class Teacher
{
public:
    Teacher();
    Teacher(string name,int agei = 20);
    void setName(string _name);
    string getName();
    void setGender(string _gender);
    string getGender();
    void setAge(int _age);
    int getAge();
    void teach();
private:
    string m_strName;
    string m_strGender;
    int m_iAge;
};
void Teacher::setName(string _name)
{
    m_strName = _name;
}
string Teacher::getName()
{
    return m_strName;
}
void Teacher::setGender(string _gender)
{
    m_strGender = _gender;
}
string Teacher::getGender()
{
    return m_strGender;
}
void Teacher::setAge(int _age)
{
    m_iAge = _age;
}
int Teacher::getAge()
{
    return m_iAge;
}
void Teacher::teach()
{
    cout << "现在上课" << endl;
}
Teacher::Teacher()
{
    m_strName = "jim";
    m_iAge = 5;
    cout << "Teacher()" << endl;
}

Teacher::Teacher(string name,int age)
{
    m_strName = name;
    m_iAge = age;
    cout << "Teacher(args)" << endl;
}

int main(void)
{
    Teacher t;
    t.setName("孔子");
    t.setGender("男");
    t.setAge(30);
    cout << t.getName() << " "
        << t.getAge() << " "
        << t.getGender() << " " << endl;
    t.teach();

    Teacher t1;
    Teacher t2("Merry",15);
    Teacher t3("James");

    cout << t1.getName() << ',' << t1.getAge() << endl;
    cout << t2.getName() << ',' << t2.getAge() << endl;
    cout << t3.getName() << ',' << t3.getAge() << endl;

    return 0;
}
