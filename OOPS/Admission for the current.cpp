#include <iostream>
using namespace std;
int main()
{class Student
{
    public:
    //int id;
    //char name[100];
    void Identity(char name[100],int id)
    {
        //cin>>name<<endl;
        //cin>>id;
        cout<<name<<" "<<id<<endl;
    }
    void Identity(int id,char name[100])
    {
        //cin>>id;
        //cin>>name<<endl;
        cout<<name<<" "<<id<<endl;
    }
};
int id;
    char name[100];
cin>>name;cin>>id;
  Student Details;
  Details.Identity(name,id);
  cin>>id; cin>>name;
  Details.Identity(id,name);


	return 0;
}
