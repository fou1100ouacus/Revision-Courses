#pragma once
using namespace std;
template<class T>
class  clsDynamicArrays 
{
protected:
	int _Size = 0;
	T* _TempArray;

public:
	T* OriginalArray; // use pointer for dynamic array

	clsDynamicArrays(int Size = 0) // constructor
	{
		if (Size < 0)
			Size = 0;
		_Size = Size;
		OriginalArray = new T[_Size];//  memory allocation of Num number of T type
		//daynamic array with any size without waste space
	}
	~clsDynamicArrays() // deconstructor the best use case for clean memory with every dynamic item
	{
		delete[] OriginalArray;
	}
	bool SetItem(int index, T Value)
	{
		if (index >= _Size || _Size < 0)
		{
			return false;
		}
		OriginalArray[index] = Value;
		return true;
	}
	int Size()
	{
		return _Size;
	}
	bool IsEmpty()
	{
		return (_Size == 0 ? true : false);
	}
	void PrintList()
	{
		for (int i = 0; i <= _Size - 1; i++)
		{
			cout << OriginalArray[i] << " ";
		}
		cout << "\n";
	}
	void Resize(int NewSize ) 
	{
		if (NewSize < 0)
		{
			NewSize = 0;
		};
		_TempArray = new T[NewSize];
		//limit the original size to the new size if it is less.
		if (NewSize < _Size)
			_Size = NewSize;
		//copy all data from original array until the size
		for (int i = 0; i < _Size; i++)
		{
			_TempArray[i] = OriginalArray[i];
		}
		_Size = NewSize;
		 clsDynamicArrays();// call deconstructor
		OriginalArray = _TempArray;
	}
	T GetItem(int index)
	{
		return OriginalArray[index];
	}
	void Reverse()
	{
		_TempArray = new T[_Size];
		int counter = 0;
		for (int i = _Size - 1; i >= 0; i--)
		{
			_TempArray[counter] = OriginalArray[i];
			counter++;
		}
		delete[] OriginalArray;
		OriginalArray = _TempArray;
	}
	void Clear()
	{
	//	delete[] OriginalArray;
		clsDynamicArrays();// deconstructor
		_Size = 0;
		_TempArray = new T[0];
		OriginalArray = _TempArray;
	}
	bool DeleteItemAt(int index)
	{
		if (index >= _Size || index < 0)
		{
			return false;
		}
		_Size--;
		_TempArray = new T[_Size];
		//copy all before index
		for (int i = 0; i < index; i++)
		{
			_TempArray[i] = OriginalArray[i];
		}
		//copy all after index
		for (int i = index + 1; i < _Size + 1; i++)
		{
			_TempArray[i - 1] = OriginalArray[i];
		}
		delete[] OriginalArray;
		OriginalArray = _TempArray;
		return true;
	}
	bool DeleteFirstItem() {
		return DeleteItemAt(0);
	}

	bool DeleteLastItem() {
		return DeleteItemAt(_Size-1);
	}

	int Find(T value)
	{
		for (int i = 0; i < _Size; i++)
		{
			if (OriginalArray[i] == value) 
			{
				return i;
			}
		}
		return -1;
	}
	bool DeleteItem(T Value) {
		int index = Find(Value);
		if (index == -1)
		{
			return false;
		}
		DeleteItemAt(index);
		return true;
	}



	bool InsertAt(T index, T value) {
		if (index > _Size || index < 0)
		{
			return false;
		}
		_Size++;
		_TempArray = new T[_Size];
		//copy all before index
		for (int i = 0; i < index; i++)
		{
			_TempArray[i] = OriginalArray[i];
		}
		_TempArray[index] = value;
		//copy all after index
		for (int i = index; i < _Size - 1; i++)
		{
			_TempArray[i + 1] = OriginalArray[i];
		}
		delete[] OriginalArray;
		OriginalArray = _TempArray;
		return true;
	}

	void InsertAtBeginning(T value)
	{
		InsertAt(0, value);
	}
	bool InsertBefore(T index, T value)
	{
		if (index < 1)
			return InsertAt(0, value);
		else
			return InsertAt(index - 1, value);
	}
	bool InsertAfter(T index, T value )
	{
		if (index >= _Size )
			return InsertAt(_Size - 1, value);
		else
			return InsertAt(index + 1, value);
	}
	bool InsertAtEnd(T value)
	{
		return InsertAt(_Size, value);
	}


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

};


