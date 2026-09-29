#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
class sensor_data
{
    private:
    double timestamp;
    double value;
    public:
    sensor_data(double a,double b)
    {
        this->timestamp=a;
        this->value=b;
        cout<<"构造函数调用"<<endl;
    }
    ~sensor_data()
    {
        cout<<"析构函数调用"<<endl;
    }
    void printValue() const
    {
        cout<<"时间戳:"<<this->timestamp<<endl;
        cout<<"数据值:"<<this->value<<endl;      


    }
     double getValue() const
     {
        return this->value;
     }

};
int main()
{
std::vector<sensor_data> sensor_list;
sensor_list.emplace_back(1.0, 10.5);
sensor_list.emplace_back(2.0, 3.2);
sensor_list.emplace_back(3.0, 8.7);
sensor_list.emplace_back(4.0, 1.1);
std::for_each(sensor_list.begin(),sensor_list.end(),[](const sensor_data& data)
{
data.printValue();
}
);


std::sort(sensor_list.begin(),sensor_list.end(),[](const sensor_data&a,const sensor_data&b)
{
return a.getValue() < b.getValue();
}
);


double threshold = 5.0;
auto count = std::count_if(sensor_list.begin(), sensor_list.end(),
    [threshold](const sensor_data& d) {
        return d.getValue() > threshold;
    });
cout<<count<<endl;

}