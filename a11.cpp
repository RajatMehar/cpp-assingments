#include<iostream>
using namespace std;
class staff
{
	int code ;
	string name ;
	public:
		void get();
		void print(); 

};
void staff :: get()
{
	cout<< "ENTER YOUR NAME AND ID :"<< endl;
	cin>> name >> code;
} 

void staff :: print()
{
	cout<< "YOUR NAME AND ID IS :"<< name << "  " << code<< endl; 
}

class teacher : public staff
{

	string subject;
	int p;
	public:
		void get1();
		void print1();
};

void teacher :: get1()
{
	cout<< "ENTER YOUR SUBJECT AND NUMBER OF PUBLICATIONS :-"<< endl;
	cin >> subject ;
	cin>> p;
}

void teacher :: print1()
{
	cout<< " YOUR SUBJECT AND NUMBER OF PUBLICATIONS ARE :"<< subject << " and "<< p <<endl;
}

class typist : public staff
{
	int n;
	public:
		void get2();
		void print2();
};

void typist :: get2()
{
	cout<< "ENTER YOUR SPEED IN WPM: "<< endl;
	cin>> n;
} 

void typist :: print2()
{
	cout<< "YOUR TYPING SPEED IN WPM IS : "<< n<<endl;
}

class officer : public staff
{
	string g;
	public: 
		void get3();
		void print3();
};

void officer :: get3()
{
	cout<< "ENTER YOUR GRADE : "<< endl;
	cin>> g;
}
void officer :: print3()
{
	cout<< "YOUR GRADE IS : "<< g << endl;
} 

class regular : public typist
{
	int r;
	public :
		void get4();
		void print4();
};
  
void regular :: get4()
{
	cout<< "ENTER YOUR SALARY:"<< endl;
	cin>> r;
}

void regular :: print4()
{
	cout<< " YOUR SALARY IS : "<< r <<  endl;
	
} 

class casual : public typist
{
	int d;
	public:
		void get5();
		void print5();
};

void casual :: get5()
{
	cout<< "ENTER YOUR DAILY WAGES :"<< endl;
	cin>> d;
}

void casual :: print5()
{
	cout<< "YOUR DAILY WAGES IS :"<< d << endl;
}
int main()
{
	teacher a;
	regular b;
	officer o;
	
	a.get();
	a.get1();
	o.get3();
	b.get2();
	b.get4();

	a.print();
	a.print1();
	o.print3();
	b.print2();	
	b.print4();
	
}
