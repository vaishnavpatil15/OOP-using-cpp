#include<iostream>
#include<math.h>
using namespace std;


class Line{
    public:
    int a1,b1,a2,b2;
    float slope1;
    int intercept;
    float dist;
    Line(int a,int b, int c, int d)
    {
        a1=a;
        b1=b;
        a2=c;
        b2=d;

        // dist= sqrt((a2-a1)(a2-a1)+(b2-b1)(b2-b1));
        // slope1=(b2-b1)/(a2-a1);
    }
    Line(float a,int b)
    {
        slope1=a;
        intercept=b;
    }
};


class Circle{
    public:

    int x1,y1,x2,y2;
    int radius;
    int circumference;
    float area,slope;

    Circle()
    {}
    Circle(int p1,int p2, int p3, int p4)
    {
        x1=p1;
        y1=p2;
        x2=p3;
        y2=p4;

        // calRadius();
        area=3.14 * radius*radius;
    }

    // float calRadius()
    // {
    //     radius= sqrt ( (x2-x1)(x2-x1) + (y2-y1)(y2-y1) );
    // }
    float calSlope()
    {
        slope=(y2-y1)/(x2-x1);
        return 0;
    }

    void isTangent(int a,int b, int c, int d)
    {
        cout<<"function is called with pionts of the line argument"<<endl;
        cout<<"if the dist between the centre and line is equal to radius,then the line is tangent to that circle"<<endl;
        x1=a+b+c+d;
    }

    void isTangent( float s, int i)
    {
        cout<<"function is called with slope and intercept of the line argument"<<endl;
        cout<<"if the dist between the centre and line is equal to radius,then the line is tangent to that circle"<<endl;
        x1=s+i;
    }

    void isTangent(Line l)
    {
        cout<<"function is called with obj Line argument"<<endl;
        cout<<"if the dist between the centre and line is equal to radius,then the line is tangent to that circle"<<endl;
        Line m;
        m=l;
    }


};



int main()
{
    Line l1;
    Circle c;
    c.isTangent(1,2,3,4);
    c.isTangent(0.5,8);
    c.isTangent(l1);

}