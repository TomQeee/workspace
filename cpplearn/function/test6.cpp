#include<iostream>
#include<vector>
#include<string>
using namespace std;
int testfunction1(int a,int b)
{
return a+b;
}
int testfunction2(int a,int b)
{
return a-b;
}
int testfunction3(int a,int b)
{
return a*b;
}
int testfunction4(int a,int b)
{
return a/b;
}


// int main()
// {
     
//     vector<decltype(testfunction1)*> a;
//     a.push_back(testfunction1);
//     a.push_back(testfunction2);
//     a.push_back(testfunction3); 
//     a.push_back(testfunction4);
//     int num1=3,num2=5;
//     printf("%d\n",a[0](num1,num2));
//     printf("%d\n",a[1](num1,num2));
//     printf("%d\n",a[2](num1,num2));
//     printf("%d\n",a[3](num1,num2));
// }

// int main()
// {
//     int num1=10,num2=12;
//     typedef int(func_t)(int,int);
//     vector<func_t*> a;
//     a.push_back(testfunction1);
//     a.push_back(testfunction2);
//     a.push_back(testfunction3);
//     a.push_back(testfunction4);
    
//     printf("%d\n",a[0](num1,num2));
//     printf("%d\n",a[1](num1,num2));
//     printf("%d\n",a[2](num1,num2));
//     printf("%d\n",a[3](num1,num2));
// }


// int main()
// {
//     int num1=3,num2=7;
//     typedef int(*func_ptr_t)(int,int);
//     vector<func_ptr_t> a;
//     a.push_back(testfunction1);
//     a.push_back(testfunction2);
//     a.push_back(testfunction3);
//     a.push_back(testfunction4);
    
//     printf("%d\n",a[0](num1,num2));
//     printf("%d\n",a[1](num1,num2));
//     printf("%d\n",a[2](num1,num2));
//     printf("%d\n",a[3](num1,num2));

// }



int main()
{
    int num1=20,num2=7;
    	
    using func_ptr_t = int(*)(int,int);
    vector<func_ptr_t> a;
    a.push_back(testfunction1);
    a.push_back(testfunction2);
    a.push_back(testfunction3);
    a.push_back(testfunction4);    
    printf("%d\n",a[0](num1,num2));
    printf("%d\n",a[1](num1,num2));
    printf("%d\n",a[2](num1,num2));
    printf("%d\n",a[3](num1,num2));


}