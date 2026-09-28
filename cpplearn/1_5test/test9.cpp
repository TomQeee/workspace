#include<iostream>
#include<string>
#include<vector>
using namespace std;
//迭代器
int main()
{
    // vector<int> a={10,23,100,239};
    // vector<int>::iterator it;
    // for(it=a.begin();it!=a.end();it++)
    // {
    //     *it*=*it;
    //     cout<<*it<<endl;
    // }





    vector<string> a={"sdada","adsa","jsgs"};
    
    auto it1=a.begin();
    for(it1;it1!=a.end();it1++)
    {
        *it1+=*it1;
        cout<<*it1<<endl;
    }

}