// ReverseNum.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <bits/stdc++.h>
using namespace std;
int ReadPositiveNumber(string Message)
{
    int Number = 0;
    do
    {
        cout << Message << endl;
        cin >> Number; // 10
    } while (Number <= 0);
    return Number;
}
void PrintDigit(int digits)//1234
{
    while (digits>0)
    {
       
       cout << digits % 10 ;
       digits /= 10;

    }


}
int main()
{
    PrintDigit(ReadPositiveNumber("enter"));
}

