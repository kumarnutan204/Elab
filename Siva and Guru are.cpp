#include <iostream>
using namespace std;
int main()
{int n,sum=0,d;
cin>>n;
while(n>0)
{d=n%10;
sum=sum*10+d;
n=n/10;
}
n=sum;
while(n>0)
{d=n%10;
    switch(d)
{case 1: cout<<"One ";break;
case 2: cout<<"Two ";break;
case 3: cout<<"Three ";break;
case 4: cout<<"Four ";break;
case 5: cout<<"Five ";break;
case 6: cout<<"Six ";break;
case 7: cout<<"Seven ";break;
case 8: cout<<"Eight ";break;
case 9: cout<<"Nine ";break;
}
 n=n/10;   
} 
	return 0;
}
