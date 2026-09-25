#include<iostream>
#include<string>
#include<vector>

using namespace std;
int main()
{
    vector<string> leng;
    string word;
    while(cin>>word)    
    {
        leng.push_back(word);        
    }
    int number=1;
    string len;
    int finalnumber=1;
    for(int i=0;i<leng.size()-1;i++)
    {
        if(leng[i]==leng[i+1])
        {
            number++;
            if(number>finalnumber)
            {
                finalnumber=number;
                len=leng[i];
            }
        }
        else
        {
            number=1;
        }
    }
    cout<<"最多："<<finalnumber<<"个： "<<len<<endl;
  
}