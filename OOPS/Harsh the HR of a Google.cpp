#include <iostream>
using namespace std;
int main()
{class Appraisal
{
    public:
    int sal;
    Appraisal(){sal=30000;cout<<"Old Salary:"<<sal<<endl;}
    Appraisal(int sal)
    {   int oldsal=30000;
        cout<<"New Salary:"<<sal<<endl;
        cout<<"You have the Hike of Rs."<<sal-oldsal;
    }
    
};
int sal;
cin>>sal;
Appraisal oldsalary;
Appraisal newsalary(sal);
	return 0;
}
