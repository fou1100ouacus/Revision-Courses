// PrintSumOfDigits.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <bits/stdc++.h>
using namespace std;
int ReadPositiveNumber(string Message)
{
	int Number = 0;
	do
	{
		cout << Message << endl;
		cin >> Number; // 1234
	} while (Number <= 0);
	return Number;
}
int PrintSumOfDigits(int x)
{
	int Sum = 0, Remainder = 0;
	while (x > 0) {
		Remainder = x % 10;
		x = x / 10;
		
			Sum = Sum + Remainder; 
	}
	return Sum; 

}
int main()
{
  




}

