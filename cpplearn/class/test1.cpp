#include<iostream>
#include<vector>

class  Point
{
private:
int x,y;
public:

Point(int a,int b)
{
    this->x=a;
    this->y=b;
}
int returnpoint();
};

inline int Point::returnpoint()
{

}

int  main()
{
 auto p1=Point(1,2);
}


