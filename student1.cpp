#include<iostream>
using namespace std;
class student
{
      public:
            int id;
            string name;
            int marks[6];
            get_info();
            print_info();            
};

void student :: get_info (void)
{
      cout<< "ENTER THE STUDENT ID"<< endl;
      cin>> id>>endl;
      cout << "ENTER YOUR NAME:"<< endl;
      cin>> name>> endl;
      cout<< "ENTER THE MARKS :"<<endl;
      for (int i=0;i<6;i++)
            cin<< marks[i];           
}

void student :: print_info(void)
{
      int total=0;
      float avg=0; 
      cout<< "YOUR ID IS :"<< id<< endl
      cout<< "YOUR NAME IS :"<< name<<endl;
      for (int i=0;i<6;i++)
      {
            total=total + marks[i];
            avg=total/6;
      } 
      cout<< "YOUR TOTAL MARKS ARE:"<< total<< endl;
      cout<< "AVERAGE IS :"<<avg<< endl;
      for (int  i=0;i<6;i++)
            if(marks[i]< 35)
                  cout<< '"YOU ARE FAIL:"<< endl;
            else 
                  cout<< "YOU ARE PASS:"<<endl;         
            
                  
}
int main()
{
      student s;
      s.get_info();
      s.print_info():
      return 0;
}
