#include <iostream>
using namespace std;
class Fraction
{
     int a;
     int b;
    public:
       Fraction() {cin>>a>>b;}
       Fraction operator *(Fraction ob)
       {
           Fraction t;
           t.a = a * ob.a;
           t.b = b * ob.b;
           return t;
       }

       void output()
       {
           if(b > 0)
               cout<< a << "/" << b <<endl;
           else
               cout<< "Error"<<endl;
       }
};
int main()
{
    Fraction f1, f2;
    //f1.output();
    //f2.output();
    (f1 * f2).output();
    return 0;
}
