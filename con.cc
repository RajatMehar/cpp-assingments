#include<iostream>
using namespace std;
class rajat 
{
	protected:
		int a,b;
	public:
		rajat()
		{
			a=0;
			b=0;	
		}
		rajat(int x,int y)
		{
			a=x;
			b=y;
		}
		void print();
};
void rajat:: print()
{
	cout<< "THE VALUE OF A AND B IS :"<<a<< " " << b<< endl; 
}

class A
{
	protected:
		int c,d;
	public:
		A()
		{
			c=0;
			d=0;
		}
		A(int w,int z)
		{
			c=w;
			d=z;
		}
		void print1();
};

void A:: print1()
{
	cout<< "THE VALUE OF C AND D IS :"<< c << " " << d << endl; 
}


class B: public rajat,public A
{
	protected:
		int e,f;
	public:
		B()
		{
			e=0;
			f=0;
		}
		B(int x,int y,int w,int z,int i , int o):
			rajat(x,y),A(i,o)
		{
			e=i;
			f=o;
		}
		void display();
		void print2();
};

void B:: print2()
{
	cout<< "THE VALUE OF E AND F IS :"<<e<< " " << f<< endl; 
}

void B:: display()
{
	print();
	print1();
	print2();
	
	cout<< "THE SUM OF A,B,C,D,E,F IS:"<< a+b+c+d+e+f<< endl;
}
int main()
{
	B r(10,20,30,40,50,60);
	r.display();
	
	return 0;

}
