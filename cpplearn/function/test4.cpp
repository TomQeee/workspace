#include<iostream>
using namespace std;
int bijiao(int a,int* ptr)
{
    if(a>*ptr)
    {
       return a;

    }
    else{return *ptr;}
}

int main()
{
int a;
int b;
int *ptr=&b;
cin>>a>>b;
cout<<bijiao(a,ptr);
}