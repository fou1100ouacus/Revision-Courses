// CountDigitFrequency.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
int CountDigitFrequency(int Number, short DigitToCheck)
{
	
	int Remainder = 0;
	short FreqCount = 0;
	while (Number > 0) 
	{
		Remainder = Number % 10;
		Number = Number / 10;
		if (DigitToCheck == Remainder) // 2 == 2 ? | 2 == 2 ?
		{
			FreqCount++; // 0 + 1 = 1 | 1 + 1 = 2 ...
		}
	}
	return FreqCount; // FreqCount = 5
}
void PrintAllDigitsFrequency(int Number)
{
	// Number = 1223222
	for (int i = 0; i < 10; i++) // 0 < 10 ? | 1 < 10 ? ....
	{
		short DigitFrequency = 0;
	
		DigitFrequency = CountDigitFrequency(Number, i);
			if (DigitFrequency > 0) // 0 > 0 ? | 1 > 0 ? ....
			{
			cout << "\n Digit " << i << " Frequency is "	<< DigitFrequency << " Time(s). \n";
			}
	}
}

int main()
{
	int Number = ReadPositiveNumber("Pleas enter the main Number ?");
	PrintAllDigitsFrequency(Number);
	return 0;





}
