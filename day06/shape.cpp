#include <iostream>

using namespace std;

class Shape
{
public:
    Shape()
    {
        cout << "Shape()" << endl;    
    }
    ~Shape()
    {
        cout << "~Shape()" << endl;    
    }
    virtual double calcArea()
    {
        cout << "Shape--calcArea()" << endl;    
    }

};

class Circle:public Shape
{
public:
    Circle(double r)
    {
        cout << "Circle()" << endl;
        m_dR = r;
    }
    ~Circle()
    {
        cout << "~Circle()" << endl;
    }
    virtual double calcArea()
    {
        cout << "Circle--caclArea()" << endl;
        return 0;
    }
protected:
    double m_dR;
};
class Rect:public Shape
{
public:
    Rect(double width,double height)
    {
        cout << "Rect()" << endl;
        m_dHeight = height;
        m_dWidth = width;
    }
    ~Rect()
    {
        cout << "~Rect()" << endl;
    }
    virtual double calcArea()
    {
        cout << "Rect--caclArea()" << endl;
        return m_dWidth * m_dHeight;
    }
protected:
    double m_dWidth;
    double m_dHeight;
};
int main(void)
{
    Shape *shape1 = new Rect(3,6);
    Shape *shape2 = new Circle(5);

    shape1->calcArea();
    shape2->calcArea();

    delete shape1;
    shape1 = NULL;
    delete shape2;
    shape2 = NULL;
    return 0;
}
