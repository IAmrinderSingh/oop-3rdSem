//return structure from function
#include<iostream>
using namespace std;
struct student
{
    char name[30];
    int rollno;
    int age;
};
student getinfo();
void printinfo(student s);
int main()
{
    student s;
    s = getinfo();
    printinfo(s);
    return 0;
}
student getinfo()
{
    student s;
    cout << "Enter name of student"<<endl;
    cin.getline(s.name, 30);
    cout << "Enter rollno of student" << endl;
    cin >> s.rollno;
    cout << "Enter age of student" << endl;
    cin >> s.age;
    return s;
}
void printinfo(student s)
{
    cout << "student name is " << s.name << endl;
    cout << "Rollno of student is " << s.rollno << endl;
    cout << "Age of student is s" << s.age << endl;

}