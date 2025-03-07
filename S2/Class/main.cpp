#include<iostream>
#include<math.h>
using namespace std;

class Point
{
    public:
        double x;
        double y;
        Point(double t , double r)
        {
            x = t;
            y = r;
            cout<<"in c:"<<x<<y<<endl;  
        }
        Point()
        {

        }
        Point(double w)
        {
            x = w;
            y = w;
        }
        // Point(Point* q)
        // {
        //     x = q->x;
        //     y = q->y;
        // }
        Point(const Point &q)
        {
            x =q.x;
            y=q.y;
        }
        ~ Point()
        {
            cout<<"in d:"<<x<<y<<endl;
        }
        void print_point()
        {
        cout << "x: " << x << ", y:" << y <<endl;
        }
        double points_distance(Point w)
        {
        double x_diff = x - w.x;
        double y_diff = y - w.y;
        return sqrt(x_diff*x_diff + y_diff*y_diff);
        }

};

// void print_point(Point p)
// {
//     cout << "x: " << p.x << ", y:" << p.y <<endl;
// }

// double points_distance(Point q , Point w)
// {
//     double x_diff = q.x - w.x;
//     double y_diff = q.y - w.y;
//     return sqrt(x_diff*x_diff + y_diff*y_diff);
// }

int main()
{
    Point p1(1,1);
    int c = 5;
    if(c>3)
    {
        Point p2(2,2);
    }
    else{
        Point p3(3,3);
    }
}

int main1()
{
    Point po(3);
    // Point p1;
    Point p1(4,5);
    p1.x = 4;
    p1.y = 5;
    Point p2;
    p2.x = -5;
    p2.y = 10;
    cout << p1.x << endl;
    // print_point(p1);
    p1.print_point();
    Point p3(p2);
    p3.print_point();
    // double r = points_distance(p1,p2);
    // double r = p1.points_distance(p2);
    // cout<< r <<endl;
    // double r = points_distance()
    return 0;
}
