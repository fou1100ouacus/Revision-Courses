// IsIdentityMatrix.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <bits/stdc++.h>
using namespace std;
bool IsIdentityMatrix(int Matrix[3][3], short Rows, short Cols)
{
	// Check Diagonal elements are 1 and rest elements are 0
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			// check for diagonals element
			if ( i == j && Matrix[i][j] != 1)
			{
				return false;
			}
			// check for rest elements
			else if (i != j && Matrix[i][j] != 0)
			{
				return false;
			}
		}
	}
	return true;
}
bool IsScalarMatrix(int Matrix[3][3], short Rows,
	short Cols)
{
	int FirstDiagElement = Matrix[0][0];
	// Check Diagonal elements are 1 and rest elements are 0
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			// check for diagonals element
			if (i == j && Matrix[i][j] != FirstDiagElement)
			{
				return false;
			}
			// check for rest elements
			else if (i != j && Matrix[i][j] != 0)
			{
				return false;
			}
		}
	}
	return true;
}
void PrintMatrix(int arr[3][3], short Rows, short Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			cout << setw(3) << arr[i][j] << " ";
			//printf(" %0*d ", 2, arr[i][j]);
		}
		cout << "\n";
	}
}
int main()
{
	// Problem #13
	//int Matrix[3][3] = { {1,2,3},{4,5,6}, {7,8,9} };
	int Matrix[3][3] = { {1,0,0},{0,1,0}, {0,0,1} };
	cout << "\n Matrix :\n";
	PrintMatrix(Matrix, 3, 3);
	if (IsIdentityMatrix(Matrix, 3, 3))
		cout << "\n YES : Matrix is Identity.";
	else
		cout << "\n No : Matrix is NOT Identity.";
	system("pause>0");
}