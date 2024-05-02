#include<iostream>
using namespace std;

class Matrix{
    public:
    int arr[3][3];

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

istream& operator >>(istream& is , Matrix m)
{
    cout<<"enter matrix elements"<<endl;
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cin>>m.arr[i][j];
            }
        }
}

ostream& operator <<(ostream& os , Matrix m)
{
    cout<<endl<<"Matrix : "<<endl;
    for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cout<<m.arr[i][j]<<"\t";
            }
            cout<<endl;
        }
        cout<<endl;
}


int main()
{
    Matrix m1;
    Matrix m2;
    Matrix m3;
    Matrix m4;

    cin>>m1;
    cin>>m2;

    m3=m1+m2;
    m4=m1-m2;

    cout<<m3;
    cout<<m4;

}