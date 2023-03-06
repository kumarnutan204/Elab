#include <iostream>
using namespace std;
int main()
{class Complex
{
    public:int r1,i1,r2,i2,r3,i3;
    Complex(){cin>>r1>>i1;cin>>r2>>i2;}
    void addcomplex()
    {r3=r2+r1;i3=i1+i2;}
    void displaycomplex()
    {cout<<r1<<"+"<<i1<<"i\n";
        cout<<r2<<"+"<<i2<<"i\n";
        cout<<r3<<"+"<<i3<<"i\n";
    }
};
Complex calculate;
calculate.addcomplex();
calculate.displaycomplex();

	return 0;
}
