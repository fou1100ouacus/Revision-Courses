// PointerAndRefrenceAndDynamicArray.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <bits/stdc++.h>
#include"clsDynamicArrays.h"
#include "clsMyString.h"

using namespace std;
void swap_Ref(int& n1, int& n2)
{
	int temp;
	temp = n1;
	n1 = n2;
	n2 = temp;
}
void swap_Poin(int* n1, int* n2)
{
	int temp;
	temp = *n1;
	*n1 = *n2;
	*n2 = temp;
}
struct stEmployee
{
	string FirstName;
	string LastName;
	int Salary;
};

	
int main()
{
	cout << "\n\n\t\t\t\t\t\t Undo/Redo Project\n\n";
	clsMyString S1;
	cout << "\nS1 = " << S1.Value << "\n";
	S1.Value = "Mohammed";
	cout << "S1 = " << S1.Value << "\n";
	S1.Value = "Mohammed2";
	cout << "S1 = " << S1.Value << "\n";
	S1.Value = "Mohammed3";
	cout << "S1 = " << S1.Value << "\n";
	cout << "\n\nUndo: ";
	cout << "\n__________\n";
	S1.Undo();
	cout << "\nS1 after undo = " << S1.Value << "\n";
	S1.Undo();
	cout << "S1 after undo = " << S1.Value << "\n";
	S1.Undo();
	cout << "S1 after undo = " << S1.Value << "\n";
	cout << "\n\nRedo: ";
	cout << "\n__________\n";
	S1.Redo();
	cout << "\nS1 after Redo = " << S1.Value << "\n";
	S1.Redo();
	cout << "S1 after Redo = " << S1.Value << "\n";
	S1.Redo();
	cout << "S1 after Redo = " << S1.Value << "\n";
	system("pause>0");
	return 0;

	//clsDynamicArrays<int> MyDynamicArray(5);
	//MyDynamicArray.SetItem(0, 10);
	//MyDynamicArray.SetItem(1, 20);
	//MyDynamicArray.SetItem(2, 30);
	//MyDynamicArray.SetItem(3, 40);
	//MyDynamicArray.SetItem(4, 50);
	//cout << "\nIs Empty? " << MyDynamicArray.IsEmpty();
	//cout << "\nArray Size: " << MyDynamicArray.Size() << "\n";
	//cout << "\nArray Items: \n";
	//MyDynamicArray.PrintList();
	//MyDynamicArray.InsertAt(2, 500);
	//cout << "\n\nArray after insert 500 at index 2:";
	//cout << "\nArray Size: " << MyDynamicArray.Size() << "\n";
	//MyDynamicArray.PrintList();








	//int Num;
	//cout << "Enter total number of students : ";
	//cin >> Num;
	//float* ptr;
	//// memory allocation of Num number of floats
	//ptr = new float[Num];
	//cout << "Enter grades of students." << endl;
	//for (int x = 0; x < Num; x++)
	//{
	//		cout << "Student [ " << x + 1 << "] : ";
	//	// index = (ptr + x)
	//	cin >> *(ptr + x);
	//}
	//cout << "\n Displaying grades of students." << endl;
	//for (int i = 0; i < Num; i++)
	//{
	//	cout << "Student [ " << i + 1 << "] : " << *(ptr + i) <<
	//		endl;
	//}
	//// ptr memory is released
	//delete[] ptr;

	/*stEmployee Employee1, * ptr;
	Employee1.FirstName = "Mohammed Abu-Hadhoude";
	Employee1.Salary = 5000;
	cout << Employee1.FirstName << endl;
	cout << Employee1.Salary << endl;

	ptr = &Employee1;
 		cout << "\n Using Pointer : \n";
	cout << ptr->FirstName << endl;
	cout << ptr->Salary << endl;*/




//	int a = 10;
//	int& x = a;
//	// Print Address
//	cout << &a << endl;
//	cout << &x << endl;
//	// Print Value
//	cout << a << endl;
//	cout << x << endl;
//	int* p = &a;
//	cout << p << endl;
//	cout << *p << endl;
//	int b = 20;

	/*p = &b;
	cout << p << endl;
	cout << *p << endl;*/


	//int arr[4] = { 2,4,62,3 };
	//int* ptr;
	//ptr = arr;
	//cout << ptr << endl;
	//cout << ptr + 1 << endl;
	//cout << ptr + 2 << endl;

	//cout << *(ptr) << endl;
	//for (int i = 0; i < 4; i++)
	//{
	//	cout << *(ptr + i) << endl;
	//}
	//cout << endl;



}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
