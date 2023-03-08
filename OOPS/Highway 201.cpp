#include <iostream>
using namespace std;
void union_sets(int a){
    cout<<"1";
}
void union_sets(int a,int b){
    cout<<"2";
}
int find_set(int v){
    return 0;
}
int main(){
int x;
cin>>x;
while(x--) {
long long n,a,s=0;
cin>>n;
for(int i=0; i<n; s+=a,i++)
cin>>a;
cout<<(s%n)*(n-(s%n))<<endl;
}
return 0;}
