// Problem11_16.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <bits/stdc++.h>
using namespace std;
struct stNumbers {
	int mark1;
	int mark2;
	int mark3;
};

stNumbers readNum() 
{

	stNumbers st;

	cout << "Enter mark 1: \n";
	cin >> st.mark1;
	cout << "Enter mark 2: \n";
	cin >> st.mark2;
	cout << "Enter mark 3: \n";
	cin >> st.mark3;

	return st;
}
float sumNumbers(stNumbers st) {
	return st.mark1 + st.mark2 + st.mark3;
}
float averageCalc() {
	return  sumNumbers(readNum()) / 3;  // if we have array we can do arr.length insted of this fixed value 
}

bool CheckAverage() {
	if (averageCalc() >= 60)return true;
	else  return false;
}
int main()

{
	
	cout << CheckAverage();
}

