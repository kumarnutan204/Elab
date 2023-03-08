#include <iostream>
using namespace std;
int main()
{class Store
{   
    public:
    void itemcount(int a)
    {
        cout<<a<<endl;
    }
    void itemcount(int totalavl,int consumed)
    {
        cout<<totalavl-consumed;
    }
};
int id,totalavl,consumed;
cin>>id>>totalavl>>consumed;
Store purchase;
purchase.itemcount(id);
purchase.itemcount(totalavl,consumed);
	return 0;
}
