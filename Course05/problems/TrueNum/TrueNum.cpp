// TrueNum.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
enum enIsTrueNum{TrueNum=0,NotTrueNum=1};
bool  CheckTrue(int Number)
{
    int sum = 0;
    int i = 1;

    while (i <= Number / 2)// 6
    {
        if (Number % i == 0) 
        {
            sum += i;
        }
        i++;
    }
    return sum == Number;
}

    
int main()
{
   

    cout << CheckTrue(ReadPositiveNumber("enter num"));




}
