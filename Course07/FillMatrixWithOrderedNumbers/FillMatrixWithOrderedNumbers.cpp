// FillMatrixWithOrderedNumbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <bits/stdc++.h>
using namespace std;


void fillMatrixWithOrderNum(int arr[3][3], int row, int col)
{
	int counter = 0;
	for (int i = 0; i < row; i++)
	{
		for (int ii = 0; ii < col; ii++)
		{
			counter++;
			arr[i][ii] = counter;
		}
	}

}








void PrintMatrix(int arr[3][3], short Rows, short
	Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			setw(3);
			cout << setw(3) << arr[i][j] << " ";
		}
		cout << "\n";
	}
}
int main()
{
	srand((unsigned)time(NULL));
	int arr[3][3];
	fillMatrixWithOrderNum(arr, 3, 3);
	cout << "\n The following is a 3x3 Ordered matrix:\n";
	PrintMatrix(arr, 3, 3);
	system("pause>0");

}
