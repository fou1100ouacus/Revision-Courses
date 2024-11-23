
#include <bits/stdc++.h>
using namespace std;
int main()
{
	queue <int> MyQueue;
	MyQueue.push(10);
	MyQueue.push(20);
	MyQueue.push(30);
	MyQueue.push(40);
	cout << "\nCount: " << MyQueue.size();
	cout << "\nFront: " << MyQueue.front();
	cout << "\nBack: " << MyQueue.back() <<
		endl;
	cout << "\nMyQueue = ";
	while (!MyQueue.empty())
	{
		cout << MyQueue.front() << " ";
		MyQueue.pop();
	}
	system("pause>0");
	return 0;
}