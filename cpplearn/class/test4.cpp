#include<iostream>
#include<string>
#include <cstring> 
using namespace std;

class String
{
    private:
    int length;
    char* buff;

    public:
    String()
    {     
    length=0;
    buff=new char;
    buff[0]='\0';
    }
    String(const char* s)
    {
        this->length=strlen(s);
        buff=new char[length+1];
        strcpy(buff,s);
    }
        
    String(const String& x)
    {        
        this->length=x.length;
        buff=new char[length+1];
        strcpy(buff,x.buff);
        cout<<"我是拷贝构造函数"<<endl;
    }
    ~String()
    {
        delete[] buff;
    }
};


int main()
{
String s1("nmeaefasfa");
String s2(s1);

}