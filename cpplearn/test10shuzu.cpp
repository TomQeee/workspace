#include<iostream>
#include<string>
using namespace std;
int main()
{
    // string line['jlda','ginea','sdaaw'];
    // string* ptr=line;
    // int leng[] = {1, 2, 3};
    // int* lenptr=leng;
    // for(lenptr;!(*lenptr==NULL);lenptr++)
    // {
    //     *lenptr=0;
    // }
    // for(int a:leng)
    // {
    //     cout<<a<<endl;
    // }
constexpr int heng=3,gao=4;
int juzhen[heng][gao];
int a=0;
for(auto& b:juzhen)
{
    for(auto&c:b)
    {
        c=a;
        a++;
    }
}
for(const auto&b:juzhen)
{
    for(const auto&c:b)
    {
        cout<<c<<endl;
    }
}
}