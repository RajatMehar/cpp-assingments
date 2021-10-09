#include<iostream>
using namespace std;

class rajat
{
	private:
		int c;
	public:
		int a;
		static int b;
		void printX()
			{
				cout<< a<<endl;
			}
		void printY()
			{
				cout<< "ENTER THE VALUE OF C:"<< endl;
				cin>> c;

				cout<< b << c<<endl;
			}
	
};

int rajat::b;

int main(void)
{
	rajat x;
	x.a=10;
	rajat::b=20;
	x.printX();
	x.printY();


	
	return 0;
}
