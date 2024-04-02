#include<iostream>
using namespace std;

class YtChannel{
    private:
    string name;
    int users;
    public:

    YtChannel(string a,int b)
    {
        name=a;
        users=b;
    }
};

class MyCollection{
    YtChannel myList[10];
    int i=0;
    public:

    void operator +=(YtChannel& yc)
    {
        i++;
        myList[i]=yc;
    }

    // void diaplay()
    // {
    //     cout<<endl;
    //     for (int j = 0; j <= i; j++)
    //     {
    //         cout<<myList[j].name<<endl;
    //     }
    //     cout<<endl;
        
    // }

};

//void operator << (ostream,string& nm)
//{
//    cout<<YtChannel.name;
//}

int main()
{

    YtChannel yc1("dkte",100);
    YtChannel yc2("cse_ai",50);

    MyCollection collection;

    collection +=yc1;
    collection +=yc2;
    
    for(int j=0;j<2;j++)
    {
        cout<<myList[j].name<<endl;
    }

    // collection.display;

}
