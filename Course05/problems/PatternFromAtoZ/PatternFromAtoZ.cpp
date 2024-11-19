// PatternFromAtoZ.cpp : This file contains the 'main' function. Program execution begins and ends




#include <bits/stdc++.h>
using namespace std;
int ReadPositiveNumber(string Message)
{
	int Number = 0;
	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);
	return Number;
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




void PrintWordsFromAAAtoZZZ()
{
	cout << "\n";
	string Word = "";
	for (int i = 65; i <= 90; i++) // 65 <= 90 ? | 66 <= 90 ? .....
	{
		for (int j = 65; j <= 90; j++) // 65 <= 90 ? | 66 <= 90 ? 

		{
			for (int k = 65; k <= 90; k++) // 65 <= 90 ? | 66 <= 90 

			{
				Word = Word + char(i); // A ...
				Word = Word + char(j); // A | B ...
				Word = Word + char(k); // A , B ... | A , B
				cout << Word << endl; // AAA | AAB .... | ZZZ

			}
		}
		cout << "\n______________________________\n";
	}
}



int main()
{





}
