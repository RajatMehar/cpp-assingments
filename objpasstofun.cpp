#include<iostream>
using namespace std;

class time
{
    int h,m;
    public:
    void gettime(int ,int);
    void puttime();
    void sum(time,time);
    
};

void time::gettime (int x,int y)
{
    h=x;
    m=y;
}

void time :: sum(time t1,time t2)
{
    m= t1.m +t2.m;
    h=m/60;
    m=m%60;
    h=h+(t1.h)+(t2.h);
}


void time :: puttime()
{
    cout<< "HOURS:"<< h<<endl;
    cout<< "MINUTES:"<< m <<endl;
}


int  main(void )
{
   class time t1,t2,t3;
    t1.gettime(4,50);
    t2.gettime(3,34);
    t3.sum(t1,t2);
    t1.puttime();
    t2.puttime();
    t3.puttime();
    
    return 0;
}
