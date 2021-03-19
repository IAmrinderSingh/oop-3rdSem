//overload function volume
#include<iostream>
#define PI 3.14
using namespace std;
//function prototype
float volume(float length, float breath, float height);
float volume(float radius);
float volume(float radius, float height);
int main()
{
    float len,breath,height,radsphere,radcy,hcylinder;
    cout << "Enter length,breath and height of cube"<<endl;
    cin >> len;
    cin >> breath;
    cin >> height;
    cout<<"Volume of cube is "<<volume(len, breath, height)<<endl;
    cout << "Enter Radius of sphere " << endl;
    cin >> radsphere;
    cout << "Volume of sphere is" << volume(radsphere);
    cout << "Enter raduis and height of cylinder " << endl;
    cin >> radcy;
    cin >> hcylinder;
    cout << "Volume of cylinder is " << volume(radcy, hcylinder) << endl;
    return 0;
}
//function definations
float volume(float length, float breadth, float height)
{
    return length * breadth * height;
}
float volume(float radius)
{
    return (4.0 / 3.0) * PI * radius * radius * radius;
}
float volume(float radius, float height)
{
    return PI * radius * radius * height;
}