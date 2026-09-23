#include<iostream>

using namespace std;
int main()
{
//写ai数组
constexpr int num=3,ber=4;
int ai[num][ber];
int number=1;
for(auto &a:ai)
{
for(int &b:a)
{
b=number;
number++;
}
}

//题目一：
// using leng=int[4];
// for(leng* it=ai;it!=ai+3;it++ )
// {
//   for(int*it1=*it;it1!=*it+4;it1++)
//   {
//     cout<<*it1<<" ";
//   }  

// }

// for(int i=0;i<num;i++)

// {
// for(int j=0;j<ber;j++)
// {
//     cout<<ai[i][j]<<" ";
// }    
// }

;
for(auto it=begin(ai);it!=end(ai);it++)
{
    for(auto it1=begin(*it);it1!=end(*it);it1++)
    {
        cout<<*it1<<" ";
    }
}



}