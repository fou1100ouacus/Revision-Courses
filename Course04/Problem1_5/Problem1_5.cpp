// Problem1_5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include<bits/stdc++.h>
using namespace std;
string readName()
{
    string Name;
    cout << "Enter yout name ?" << endl;
    getline(cin, Name);
    return Name;
}
void printName(string name)
{
    cout << name;
}

bool Odd_Even(int x)
{
    return x % 2 == 0;
}

struct stInfo
{
    int age;
    bool HasDriveLicense;
};

stInfo ReadInfo()
{
    stInfo info;
    cout << "Enter age" << endl;
    cin >> info.age;
    cout << "Enter licence" << endl;
    cin >> info.HasDriveLicense;

    return info;
}

bool Result(stInfo info)
{
    return info.age > 21 && info.HasDriveLicense;
}
int main()
{


 //  cout <<Result(ReadInfo());

    //cout << Odd_Even(2) << endl;
    //cout << Odd_Even(23);

    //printName(readName());
}

