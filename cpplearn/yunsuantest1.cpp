#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> vec;
    int i;
    while(cin>>i)
    {
        vec.push_back(i);
    }
    for(int j=0;j<vec.size();j++)
    {
        vec[j]=((vec[j]%2==0)?vec[j]:vec[j]*2);
        cout<<vec[j]<<" ";
    }
    
}