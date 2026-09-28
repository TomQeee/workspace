#include<iostream>
#include<vector>

class  Circle
{
private:
int r;
public:
void setr(int a);
double circlesize();
};

void Circle::setr(int a )
{
this->r=a;
}

double Circle::circlesize()
{
return  this->r*this->r*3.14;
}



int  main()
{
Circle c1;
c1.setr(10);
std::cout<<c1.circlesize()<<std::endl;
 
}
