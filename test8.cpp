#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
vector<string> a;
string lange;
while(cin>>lange)
{
a.push_back(lange);
}
for(string &b:a)
{
    for(int i=0;i<=b.size();i++)
    {
        if(b[i]<='z'&&b[i]>='a')
        {
            b[i]=toupper(b[i]);
        }
    }
    
}

for(int i=0;i<=a.size();i++)
{
    cout<<a[i]<<" ";
}
}