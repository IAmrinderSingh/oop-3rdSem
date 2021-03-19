//open,write and read a file
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    char data[100];
    
    ofstream of;
    of.open("file.txt",ios::out);
    cout << "writing to file" << endl;
    cout << "Enter your name";
    cin.getline(data, 100);
    of <<data << endl;
    cout << "Enter your age" << endl;
    cin >> data;
    cin.ignore();
    of << data << endl;
    of.close();
    ifstream ifl;
    ifl.open("file.txt", ios::in);

    cout << "Reading to file" << endl;
    ifl >> data;
    cout << data;
    ifl >> data;
    cout << data;
    return 0;
}