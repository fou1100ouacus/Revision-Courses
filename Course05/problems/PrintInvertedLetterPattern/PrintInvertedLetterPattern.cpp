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

void PrintInvertedLetterPattern(int Number)
{
	
		cout << "\n";
		int n = 65 + Number - 1;//67 c
	for (int i = n; i >= 65; i--)
	{
	    	for (int j = 1;     j <= Number - (n - i)      ; j++)
			{
				cout << char(i); // CCC \n BB \n A  /// llllllloooooooooop 
            }
		cout << endl;
	}
}





int main()
{
	




}
