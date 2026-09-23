#include <iostream>
#include<string.h>
using namespace std;

int main()
{
string a;
getline(cin,a);
for(int i=0;i<a.size();i++)
{
    if(a[i]>'9'||a[i]<'0')
    {
        a[i]='X';
    }

}
cout<<a;
}