#include<iostream>
using namespace std;

class Matrix{
    public:
    int arr[3][3];

    void getMatrix()
    {
        cout<<"enter matrix elements"<<endl;
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cin>>arr[i][j];
            }
        }
    }
    void Display()
    {
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cout<<arr[i][j]<<"\t";
            }
            cout<<endl;
        }
        cout<<endl;
    }

    Matrix operator +(Matrix &m2)
    {
        Matrix m3;
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                m3.arr[i][j]=arr[i][j]+m2.arr[i][j];
            }
        }
        return m3;
    }

    Matrix operator -(Matrix &m2)
    {
        Matrix m3;
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                m3.arr[i][j]=arr[i][j]-m2.arr[i][j];
            }
        }
        return m3;
    }



};

int main()
{
    Matrix m1;
    Matrix m2;
    Matrix m3;
    Matrix m4;
    m1.getMatrix();
    m2.getMatrix();
    m3=m1+m2;
    m4=m1-m2;
    m3.Display();
    m4.Display();

}