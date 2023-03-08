#include <iostream>
using namespace std;
int main()
{class Hospital
{
    public:
    void bill(int a,int b)
    {
        cout<<a*b;
    }
};
int days,roomrent,mdeicinebill;
cin>>mdeicinebill;cin>>days;
Hospital ob;
ob.bill(mdeicinebill,days);
cout<<endl;
cin>>roomrent;cin>>days;
ob.bill(roomrent,days);

	return 0;
}
