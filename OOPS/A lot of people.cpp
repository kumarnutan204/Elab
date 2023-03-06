#include <bits/stdc++.h>
using namespace std;
const double pi=acos(-1.0);
void garbage(){
    cout<<"class Rain public:void Cup() Rain MakingEmpty; MakingEmpty.Cup();";
}
int main()
{
    double d,h,v,e,p,a;
    cin>>d>>h>>v>>e;
        p=(pi*e*d*d)/4.0;
        a=(pi*h*d*d)/4.0;
        if(p<v){
            cout<<"YES\n";
            printf("%.10lf\n",a/(v-p));}
        else{
            cout<<"NO\n";}
    return 0;}
