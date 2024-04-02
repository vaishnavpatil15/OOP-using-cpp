#include<iostream>
using namespace std;

class Date{
    int d,m,y;

    public:

    int n=0;

    Date()
    {
        d=1;
        m=4;
        y=2024;
    }
    Date(int a,int b, int c)
    {
        d=a;
        m=b;
        y=c;
    }

     void getData()
     {
        cout<<"enter day, month and year"<<endl;
        cin>>d>>m>>y;
     }

     void Display()
     {
        string mmm[13]={"A","JAN","FEB","MAR","APR","MAY","JUN","JUL","AUG","SEP","OCT","NOV","DEC"};
        cout<<endl<<d<<"-"<<m<<"-"<<y<<endl;
        cout<<d<<"/"<<m<<"/"<<y<<endl;
        cout<<d<<"-"<<mmm[m]<<"-"<<y<<endl;
        cout<<"this date is "<<n<<" day of the year"<<endl<<endl;
     }

     int number()
     {
        
        int num[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
        for(int i=1;i<m;i++)
        {
            n=n+num[i];
        }
        n=n+d;
        return n;
     }

     void increment()
     {
        d++;
        m++;
        Display();
     }

};


int main()
{

Date d1;
d1.number();
d1.Display();
Date d2(15,3,2024);
d2.number();
d2.Display();
int a= d1.n;
int b= d2.n;
int dif=a-b;
cout<<"the difference is "<<dif<<endl;
d1.increment();

}