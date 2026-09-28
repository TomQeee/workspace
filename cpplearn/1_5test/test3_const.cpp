#include <iostream>
using namespace std;
int main()
{
   const int a=10;
   int b=100;
   const int &p=b;
   b=100;
   cout<<b<<endl;
   int *const p2=&b;
   *p2=200;
   cout<<b<<endl;

   int c=1;
   double d=0.22;
   auto e=c+d;
   cout<<e<<endl;
   auto f=p+1;
   cout<<f<<endl;

}