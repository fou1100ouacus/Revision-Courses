#pragma once
template<class T>
class clsDynamicArray
{
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

