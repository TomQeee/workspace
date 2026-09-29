#include <iostream>
#include<string>
#include<memory>
#include<vector>
using namespace std;

shared_ptr<vector<int>> createVector()
{
    return make_shared<vector<int>>();
}

void Vectorinput(shared_ptr<vector<int>> ptr)
{
    int i;
    while(cin>>i)
    {
        ptr->push_back(i);
    }
    cin.clear();
}

void PrintVector(shared_ptr<vector<int>> ptr)
{
    for(int i:*ptr)
    {
        cout<<i<<" ";
    }
    cout<<endl;
}

int main()
{
    auto p=createVector();
    Vectorinput(p);
    PrintVector(p);
    return 0;
}