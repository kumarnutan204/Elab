#include <iostream>
using namespace std;
void f(){};
class Electricity
{
    public:
    int t;
    float bill;
    void print_bill();
    /*{
        if(unit>=100 && unit<=300)
        {bill=unit*(0.4);
        cout<<bill<<"\n";}
        else if(unit>100 && unit<=300)
        {bill=unit*(0.5);
        cout<<bill<<"\n";}
        else
        {bill=unit*(0.6);
        cout<<bill<<"\n";}
    }*/
};


 void Electricity :: print_bill()
    {
        if(t>=100 && t<=300)
        {bill=t*(0.4);
        cout<<bill<<"\n";}
        else if(t>100 && t<=300)
        {bill=t*(0.5);
        cout<<bill<<"\n";}
        else
        {bill=t*(0.6);
        cout<<bill<<"\n";}
    }

int main()
{
int unit;
cin>>unit;
Electricity e[unit];
for(int i=0;i<unit;i++)
{
    cin>>e[i].t;
    e[i].print_bill();
}
//for(int i=0;i<t;i++)
//{   
  //  e[i].print_bill();
//}
	return 0;
}
