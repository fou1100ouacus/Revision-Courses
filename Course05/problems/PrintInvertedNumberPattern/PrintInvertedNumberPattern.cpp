// PrintInvertedNumberPattern.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <bits/stdc++.h>
using namespace std;
int ReadPositiveNumber(string Message)
{
	int Number = 0;
	do
	{
		cout << Message << endl;
		cin >> Number; // 12321
	} while (Number <= 0);
	return Number;
}


string DuplicatNum(int n) {
	switch (n)
	{
	case 1:
		return "1";
	case 2:
		return "22";
	case 3:
		return "333";
	case 4:
		return "4444";
	case 5:
		return "55555";
	case 6:
		return "666666";
	case 7:
		return "7777777";
	case 8:
		return "88888888";
	case 9:
		return "999999999";
	default:
		return " -1 ";
		break;
	}
}
string PrintInvertedNumberPattern(int Num) 
{
	string pattern = ""; // 333 22 1
	while (Num>=1)
	{
		
		pattern += DuplicatNum(Num) + "	 ";
		Num -= 1;

	}
	return pattern;

}
void PrintInvertedNumberPatternUsingLoop(int Number)
{
	// Number = 3
	cout << "\n";

	for (int i = Number; i >= 1; i--)
	{
		
			for (int j = 1; j <= i; j++)
			{
				cout << i;
			}
		
		cout << endl;
	}
}


int main()
{
	PrintInvertedNumberPatternUsingLoop(3);
	cout <<PrintInvertedNumberPattern(ReadPositiveNumber("enter"));
}

