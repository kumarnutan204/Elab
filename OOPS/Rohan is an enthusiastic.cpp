#include <iostream>
using namespace std;
class GoodNum
{
    public:
   // void check()
    //{cout<<"hey";}
    void check(int n)
    {   int d,count=0,f=0;
        while(n)
        {
            d=n%10;
            if(d==0){
                f=1;
            count++;}
            n/=10;
        }
    if(f==1) cout<<count;
    else cout<<"GOOD Number";
}};
int main()
{   GoodNum Learning;
    int N;
    cin>>N;
    Learning.check(N);
	return 0;
}
