#include<iostream>
using namespace std;

class Complex{
    public:
    int real,img;

    Complex(int a,int b)
    {
        real=a;
        img=b;
    }
    Complex(){

    }

    Complex operator +(Complex c2)
    {
        Complex c3;
        c3.real = real + c2.real;
        c3.img = img + c2.img;
        return c3;
    }

    void display()
    {
        cout<<real<<"+"<<img<<"i"<<endl;
    }
};
int main()
{
    Complex n1(3,5);
    Complex n2(4,1);
    Complex n3;
    n3 = n1 + n2;
    n1.display();
    n2.display();
    n3.display();
    
}