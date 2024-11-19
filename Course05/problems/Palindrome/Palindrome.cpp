// Palindrome.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
int ReverseNumbers(int Number)
{
	// Number = 1234
	int Remainder = 0;
	int Number2 = 0;
	while (Number > 0) // 12321 > 0 ? | 1232 > 0 ? ....
	{
		Remainder = Number % 10; // 12321 % 10 = 1 | 1232 % 10 = 2
		Number /= 10;
		Number2 = Number2 * 10 + Remainder;

	}
	return Number2;// Number2 = 12321
}
bool IsPalindrome(int Number)
{

	return Number == ReverseNumbers(Number);

}
int main()
{
	if (IsPalindrome(ReverseNumbers(ReadPositiveNumber("Pleas enter a 	positie Number ? "))))
		cout << "\n Yes , it is a Palindrome number \n";

	else
		cout << "\n No , it is NOT a Palindrome number \n";
}
