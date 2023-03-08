#include <iostream>
using namespace std;
int main()
{class Country
{
    public:
    Country(){cout<<"Country:INDIA"<<endl;}
    Country(char statename[100],int area,int density)
    {
        cout<<"State:"<<statename<<endl;
        cout<<"Area:"<<area<<endl;
        cout<<"Density:"<<density<<endl;
    }
};
int area,density;
char statename[100];
cin>>statename>>area>>density;
Country();
Country statesofindia(statename,area,density);

	return 0;
}
