#include <iostream>
#include <string>
using namespace std;
class aadhaar
{
    public:
    string n1,n2,n3;
    void NameofCitizen(string fn,string mn,string ln)
    {n1=fn;n2=mn;n3=ln;
    if(fn=="" || mn=="" ||ln=="")
    cout<<"Invalid Name";
    else 
    cout<<fn+mn+ln;
}};
int main(){
aadhaar Card;
string fn,mn,ln;
cin>>fn>>mn>>ln;
Card.NameofCitizen(fn,mn,ln);
	return 0;
}
