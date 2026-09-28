#include<iostream>
#include<vector>
#include<vector>
using namespace std;
struct Point
{
    string pointname;
    double x,y,z;
};

int main()
{
vector<Point> points;
points.push_back({"dasa",1.0, 2.0, 3.0});
points.push_back({"sdasda",4.0, 5.0, 6.0});
points.push_back({"dhlfas",7.0, 8.0, 9.0});
for(int i=0;i<points.size();i++)
{
    cout<<"点"<<points[i].pointname<<"的坐标是： "<<" x: "<<points[i].x<<" y: "<<points[i].y<<" z: "<<points[i].z<<endl;
}
}