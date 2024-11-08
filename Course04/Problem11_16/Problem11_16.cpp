// Problem11_16.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <bits/stdc++.h>
using namespace std;
struct stGivens {
	int n1;
	int n2;
};

stGivens readNum() 
{

	stGivens st;

	cout << "Enter a : \n";
	cin >> st.n1;
	cout << "Enter  d  \n";
	cin >> st.n2;
	

	return st;
}

float area(stGivens st) 
{
	return st.n1 * (sqrt(pow(st.n2, 2) - pow(st.n1, 2)));
}


int main()

{
	
	cout << CheckAverage();
}

