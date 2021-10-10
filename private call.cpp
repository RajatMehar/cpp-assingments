#include<iostream>
using namespace std;
class rajat
{
    int a;
public:

    int b;
    void raj()
    {
        cout<<"enter the value of b:"<<endl;
        cin>>b;
        cout<<"enter the value of a:"<<endl;
        cin>>a;
    }
    void ra();
    void raja()
    {
        cout<< "the value of a is :"<< a<< endl;
    }



};


int main()
{

    rajat r;
    r.raj();
    cout<< r.b<<endl;
    r.raja();

}
