#include <iostream>
using namespace std;
class ITEM
{
    public:
    int icode[20],n;
    float price[20],large=0,pricesum=0;
    void getdata(int b)
    {
        n=b;
        for(int i=0;i<n;i++)
        cin>>icode[i]>>price[i];
    }
    void largest()
    {   for(int i=0;i<n;i++)
        {if (price[i]>=large)
            large=price[i];
        }
    }
    void sum()
    {   for(int i=0;i<n;i++)
        pricesum+=price[i];
    }
    void displayitems()
    {cout<<"Largest Price="<<large<<endl;
        cout<<"Sum of Prices="<<pricesum<<endl;
        cout<<"Code and Price"<<endl;
        for(int i=0;i<n;i++)
        cout<<icode[i]<<" and "<<price[i]<<endl;
    }
};
using namespace std;
int main()
{
ITEM order;
int b;cin>>b;
order.getdata(b);
order.largest();
order.sum();
order.displayitems();
	return 0;
}
