#include <iostream>
#include<string.h>
#include<vector>
using namespace std;

int main()
{
// vector<int> a={1,12,331,12};
// vector<string> b{"sad","affa","plda"};
// for(string a:b)
// {
//     cout<<a<<endl;
// }
// vector<int> a;;
// for(int i=0;i<=100;i++)
// {
//     a.push_back(i);
//     cout<<a[i]<<endl;
// // }
vector<int> a;
int x;
while(cin>>x)
{
a.push_back(x);
}
for(int c:a)
{
    cout<<c<<endl;
}

}