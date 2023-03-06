#include <iostream>
using namespace std;
class student
{
    public:
    string name;
    int roll;
    float height,weight;
    void displaydata()
    {cout<<name<<" "<<roll<<" "<<height<<" "<<weight;}
   student(){name="Bhagavan";roll=1593;height=172.5;weight=60.4;}
};
int main()
{student s1,s2;
cin>>s2.name>>s2.roll>>s2.height>>s2.weight;
s2.displaydata();cout<<"\n";
s1.displaydata();
    return 0;
}
