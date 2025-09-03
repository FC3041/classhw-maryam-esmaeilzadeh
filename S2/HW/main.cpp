#include<iostream>
#include<math.h>

using namespace std;

class Point
{
public:
    int m_x;
    int m_y;

    Point(int x , int y)
    {
        m_x = x;
        m_y = y;
    }

    double DistanceTo(const Point &o) const
    {
        double xdiff = o.m_x - m_x;
        double ydiff = o.m_y - m_y;
        return sqrt(xdiff*xdiff + ydiff*ydiff);
    }

};

class Circle
{

    Point m_o;
    double m_r;

public:
    Circle(const Point &o , double r)
        : m_o(o)
        , m_r(r)
    {
    }


    double Circumference()
    {
        return M_PI*2*m_r;
    }

    double Area()
    {
        return M_PI*m_r*m_r;
    }

    double DistanceTo(const Point &o) const
    {
        return o.DistanceTo(m_o);
    }

    double DistanceTo(const Circle &c) const
    {
        return DistanceTo(c.m_o);
    }

    void InCircle(const Point &p) const
    {
        if( p.DistanceTo(m_o)<m_r )
        {
            cout<<"yes"<<endl;
        }
        else
        {
            cout<<"no"<<endl;
        }
    }

};


int main()
{
    Point o1(0,0);
    Circle c1(o1 , 1);
    Point o2(1,1);
    Circle c2(o2 , 2);
    Point p1(2,2);
    cout << c1.Circumference() << endl ;
    cout << c1.Area() << endl ;
    cout << o1.DistanceTo(o2) << endl ;
    cout << c1.DistanceTo(c2) << endl ;
    c1.InCircle(p1);
    c2.InCircle(p1);

}
