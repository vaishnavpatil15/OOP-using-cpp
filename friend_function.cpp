// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class Rectangle{
    private:
    int base;
    int height;
    int area=0;
    int circumference;
    public:
    
    void Area()
    {
        area=base*height;
    }
    
    Rectangle(int a, int b)
    {
        base=a;
        height=b;
    }
    
    friend void getRect(Rectangle r);
    friend void printRect(Rectangle r);
    
};

void printRect(Rectangle r)
{
    cout<<"area = "<<r.area<<endl;
}


int main() {
    Rectangle r1(2,5);
    r1.Area();
    printRect(r1);

    return 0;
}