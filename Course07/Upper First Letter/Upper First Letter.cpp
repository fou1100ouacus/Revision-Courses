#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
// Problem #27
char ReadChar()
{
	char Ch1;
	cout << "Pleas Enter a Character ? \n";
	cin >> Ch1;
	return Ch1;
}
char InvertLetterCase(char Char1)
{
		return isupper(Char1) ? tolower(Char1) : toupper(Char1);
}
string InvertAllStringLetterCase(string S1)
{
	for (int i = 0; i < S1.length(); i++)
	{
		S1[i] = InvertLetterCase(S1[i]);
	}
	return S1;
}
int main()
{
	// Problem #27
	char Ch1 = ReadChar();
	cout << "\n Char after inverting case : \n";
	Ch1 = InvertLetterCase(Ch1);
	cout << Ch1 << endl;
	system("pause>0");
}