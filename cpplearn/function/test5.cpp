#include<iostream>
#include<string>
#include<vector>
using namespace std;

void dedao(int num, const vector<string>& lll)
{
    if (num != lll.size()) {
        cout << lll[num] << " ";
        dedao(num + 1, lll);
    }
    // num == lll.size() 时什么都不做，自然结束
}

int main()
{   
    vector<string> loop;
    int a=0;
    string x;
    while (cin >> x) 
    {
        loop.push_back(x);
    }
    dedao(a,loop);
}