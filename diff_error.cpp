//Error in c/c++
#include<iostream>
using namespace std;

int Main()//linker error 
{
    int a=10, b=0, x;
    cout<<"starting Divison"//syntax error

    for (int i = 0; i < 5;i++);//logical error
    {
        x = a / b;//run time error
    }
    cout << "sum of a and b";
    a + b = x;//semantic error
    return 0;
}