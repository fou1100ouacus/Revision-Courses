// CountWords.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
// Problem #23
string ReadString()
{
	string S1 = " ";
	cout << "Pleas Enter your string ? \n";
	getline(cin, S1);
	return S1;
}
// Problem #36
short CountWords(string S9)
{
	string delim = " "; // Delimiter 
	short Count = 0;
	short pos = 0;
	string sWord; // define a string variable
	// use fine() function to get the position 
		while ((pos = S9.find(delim)) !=	std::string::npos)
		{
				sWord = S9.substr(0, pos);
			if (sWord != "")
			{
				Count++;
			}
				// erase() until positon and move to next word
				S9.erase(0, pos + delim.length());
		}
		if (S9 != "")
		{
			// it print last word of the string
			Count++;
		}
	return Count;
}
int main()
{
	// Problem #36
	string S9 = ReadString();
	cout << "\nThe number of words in your string is: ";
	cout << CountWords(S9);
	system("pause>0");
}