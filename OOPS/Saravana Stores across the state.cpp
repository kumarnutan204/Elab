#include <iostream>
using namespace std;
int main()
{class Salary
{
    public:
    void Increment(int cursal)
    {
        cout<<cursal<<endl;
    }
    void Increment(int cursal,int bonus)
    {
        cout<<cursal+bonus<<endl;
    }
    
};
int cursal,bonus=0;
cin>>cursal>>cursal>>bonus;
Salary empsal;
empsal.Increment(cursal);
empsal.Increment(cursal,bonus);

	return 0;
}
