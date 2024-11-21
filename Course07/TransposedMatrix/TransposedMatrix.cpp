// TransposedMatrix.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <bits/stdc++.h>
using namespace std;
// Problem #6
void FillMatrixWithOrderedNumbers(int arr[3][3], short
    Rows, short Cols)
{
    int Counter = 0;
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            Counter++;
            arr[i][j] = Counter;
        }
    }
}
// Problem #1
void PrintMatrix(int arr[3][3], short Rows, short Cols)
{
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            cout << setw(3) << arr[i][j] << " ";
        }
        cout << "\n";
    }
}
void TransposeMatrix(int arr[3][3], int arrTransposed[3][3], short Rows, short
    Cols)
{
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            arrTransposed[i][j] = arr[j][i];
        }
    }
}
void MultiplyMatrix(int Matrix1[3][3], int Matrix2[3][3], int MatrixResults[3][3],
    short Rows, short Cols)
{
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            MatrixResults[i][j] = Matrix1[i][j] * Matrix2[i][j];
        }
    }
}
void PrintMiddleColOfMatrix(int arr[3][3], short Rows, short Cols)
{
    short MiddleCol = Cols / 2;
    for (short j = 0; j < Cols; j++)
    {
        printf(" %0*d ", 2, arr[j][MiddleCol]);
    }
    cout << "\n";
}
void PrintMiddleRowOfMatrix(int arr[3][3], short Rows, short Cols)
{
    short MiddleRow = Rows / 2;
    for (short j = 0; j < Cols; j++)
    {
        printf(" %0*d ", 2, arr[MiddleRow][j]);
    }
    cout << "\n";
}

int main()
{
    srand((unsigned)time(NULL));
    int Matrix1[3][3];
    // Problem #9
   // FillMatrixWithRandomNumbers(Matrix1, 3, 3);
    cout << "\n Matrix 1 :\n";
    PrintMatrix(Matrix1, 3, 3);
    cout << "\n Middle Row of Matrix 1 is :\n";
    PrintMiddleRowOfMatrix(Matrix1, 3, 3);
    cout << "\n Middle Col of Matrix 1 is :\n";
    PrintMiddleColOfMatrix(Matrix1, 3, 3);
}

