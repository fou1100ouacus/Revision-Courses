
#include<bits/stdc++.h>
using namespace std;
void printHeader() {
	cout << "\n\n\t\t\t Multipliaction Table From 1 to 10\n\n";
	cout << "\t";
	for (int i = 1; i <= 10; i++)
	{
		cout << i << "\t"; // Print ( 1 2 3 ...)
	}
	cout <<
		"\n___________________________________________________________________________________\n ";

}

string printColSep(int i) {
	if (i < 10) {
		return "   |";

	}
	return "  |";
}

void PrintMultipicationTable() 
{
	printHeader();
	cout << endl;
	for (int i = 1; i <= 10; i++)
	{
		cout << " " << i << printColSep(i) << "\t";
		for (int j = 1; j<= 10; j++)
		{
			cout << i * j << "\t";
		}
		cout <<endl;
	}

}
int main()
{
	PrintMultipicationTable();
   






}
