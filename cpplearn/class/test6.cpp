#include<iostream>
using namespace std;

class Point
{
    private:
    int x,y;
    public:
    void setpoint(int a,int b)
    {
     this->x=a;
     this->y=b;  

    }
    void showpoint()
    {     
      cout<<"x= "<<this->x;
      cout<<"y= "<<this->y;
    }


    Point(int a,int b)
    {
        this->x=a;
        this->y=b;        
    }

    Point(const Point &p)
    {
        this->x=p.x;
        this->y=p.y;  
        cout<<"引用函数"<<endl;      
    }




};


void fun(Point& p)
{
    p.setpoint(10,10);
    p.showpoint();
}

int main()
{
    Point p1(10,20);
    fun(p1);
}