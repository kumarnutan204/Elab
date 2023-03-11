#include <iostream>
using namespace std;
void l()
{
    printf("class Assignement class Student:public AssignementStudent obj;obj.get();obj.get();obj.display();");
}
int main()
{
long long a;
scanf("%lld",&a);
  int count = 0;
  do {
    a /= 10;
    ++count;
  } while (a != 0);

  printf("%d", count);
	return 0;
}
