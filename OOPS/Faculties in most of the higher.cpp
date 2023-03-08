#include <iostream>
using namespace std;
int main()
{class Attendance
{
    public:
    Attendance(){cout<<"No Attendance"<<endl;}
    
    Attendance(char studentname[100])
    {
        cout<<"Hello "<<studentname<<endl;
    }
};
char studentname[100];
cin>>studentname;
Attendance stdabs; 
Attendance stdpst(studentname);
	return 0;
}
