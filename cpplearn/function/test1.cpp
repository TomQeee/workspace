#include<iostream>
using namespace std;

int chen(int num)
{
    int i=1;
    while(num!=0)
    {
        i*=num;
        num--;
    }
    return i;
}

int juedui(int num)
{
if(num>=0){return num;}
else if(num<0){return -num;}
}

int main()
{
    int i=chen(10);
    int j=juedui(-100);
    cout<<i<<"    "<<j<<endl;
}