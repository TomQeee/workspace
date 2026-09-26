#include<iostream>
using namespace std;
int hanshu()
{
    static int num;
    return ++num;
}
int main()
{
for(int i=0;i<=10;i++)
{
    cout<<hanshu()<<" "<<endl;
}
}