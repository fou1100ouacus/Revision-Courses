// linkedlist2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <bits/stdc++.h>
#include"MydblLinkedList.h"
#include"clsMyStack.h"
#include"clsMyQueue.h"


using namespace std;
class Node
{
public:
	int value;
	Node *next;
	Node* prev;

private:

};
void print(Node* head)
{
	cout << "head->";
	while (head != NULL)
	{
		cout  << head->value << "->";
		head = head->next;

	}
	cout << "Null";
}
void InsertAtBeginning(Node *&head,int value)  
{
	Node *newNode= new Node();
	newNode->value = value;

	newNode->next=head;
	head = newNode;

}
Node* Find(Node* head, int Value)
{
	while (head != NULL) {
		if (head->value == Value)
			return head;
		head = head->next;
	}
	return NULL;
}
void InsertAfter(Node* prev_node, int Value) {
	if (prev_node == NULL) {
		cout << "the given previous node cannot be NULL";
		return;
	}
	Node* new_node = new Node();
	new_node->value = Value;
	new_node->next = prev_node->next;
	prev_node->next = new_node;
}
//void InsertAfter(Node* current, int value) {
//	/* 1 - Create a new node with the desired value.
//	2-Set the next pointer of the new node to the next node of the current node.
//	3-Set the previous pointer of the new node to the current node.
//	4-Set the next pointer of the current node to the new node.
//	5-Set the previous pointer of the next node to the new node(if it exists).
//	*/
//	Node* newNode = new Node();
//	newNode->value = value;
//	newNode->next = current->next;
//	newNode->prev = current;
//	if (current->next != NULL) {
//		current->next->prev = newNode;
//	}
//	current->next = newNode;
//}
void PrintNodeDetails(Node* head)
{
	if (head->prev != NULL)
		cout << head->prev->value;
	else
		cout << "NULL";
	cout << " <--> " << head->value << " <--> ";
	if (head->next != NULL)
		cout << head->next->value << "\n";
	else
		cout << "NULL";
}
void DeleteNode(Node*& head, Node*& NodeToDelete) {
	/*
	1-Set the next pointer of the previous node to the next pointer of the current
   node.
	2-Set the previous pointer of the next node to the previous pointer of the current
   node.
	3-Delete the current node.
	*/
	if (head == NULL || NodeToDelete == NULL) {
		return;
	}
	if (head == NodeToDelete) {
		head = NodeToDelete->next;
	}
	if (NodeToDelete->next != NULL) {
		NodeToDelete->next->prev = NodeToDelete->prev;
	}
	if (NodeToDelete->prev != NULL) {
		NodeToDelete->prev->next = NodeToDelete->next;
	}
	delete NodeToDelete;
}
void InsertAtEnd(Node* head, int value) {
	/*
	1-Create a new node with the desired value.
	2-Traverse the list to find the last node.
	3-Set the next pointer of the last node to the new node.
	4-Set the previous pointer of the new node to the last node.
	*/
	Node* newNode = new Node();
	newNode->value = value;
	newNode->next = NULL;
	if (head == NULL) {
		newNode->prev = NULL;
		head = newNode;
	}
	else {
		Node* current = head;
		while (current->next != NULL) {
			current = current->next;
		}
		current->next = newNode;
		newNode->prev = current;
	}
}
void DeleteFirstNode(Node*& head) {
	/*
	1-Store a reference to the head node in a temporary variable.
	2-Update the head pointer to point to the next node in the list.
	3-Set the previous pointer of the new head to NULL.
	4-Delete the temporary reference to the old head node.
	*/
	if (head == NULL) {
		return;
	}
	Node* temp = head;
	head = head->next;
	if (head != NULL) {
		head->prev = NULL;
	}
	delete temp;
}
void DeleteLastNode(Node*& head) {
	/*
	1-Traverse the list to find the last node.
	2-Set the next pointer of the second-to-last node to NULL.
	3-Delete the last node.
	*/
	if (head == NULL) {
		return;
	}
	if (head->next == NULL) {
		delete head;
		head = NULL;
		return;
	}
	Node* current = head;
	//here we find the node before the last node
	while (current->next->next != NULL) {
		current = current->next;
	}
	Node* temp = current->next;
	current->next = NULL;
	delete temp;
}

int main()
{
	

	//clsMyQueue <int> MyQueue;
	//MyQueue.push(10);
	//MyQueue.push(20);
	//MyQueue.push(30);
	//MyQueue.push(40);
	//MyQueue.push(50);
	//cout << "\nQueue: \n";
	//MyQueue.Print();
	//cout << "\nQueue Size: " << MyQueue.Size();
	//cout << "\nQueue Front: " << MyQueue.front();
	//cout << "\nQueue Back: " << MyQueue.back();
	//MyQueue.pop();
	//cout << "\n\nQueue after pop() : \n";
	//MyQueue.Print();
	////Extension #1
	//cout << "\n\n Item(2) : " << MyQueue.GetItem(2);
	////Extension #2
	//MyQueue.Reverse();
	//cout << "\n\nQueue after reverse() : \n";
	//MyQueue.Print();
	////Extension #3
	//MyQueue.UpdateItem(2, 600);
	//cout << "\n\nQueue after updating Item(2) to 600 : \n";
	//MyQueue.Print();
	////Extension #4
	//MyQueue.InsertAfter(2, 800);
	//cout << "\n\nQueue after Inserting 800 after Item(2) : \n";
	//MyQueue.Print();
	////Extension #5
	//MyQueue.InsertAtFront(1000);
	//cout << "\n\nQueue after Inserting 1000 at front: \n";
	//MyQueue.Print();
	////Extension #6
	//MyQueue.InsertAtBack(2000);
	//cout << "\n\nQueue after Inserting 2000 at back: \n";
	//MyQueue.Print();
	////Extension #7
	//MyQueue.Clear();
	//cout << "\n\nQueue after Clear(): \n";
	//MyQueue.Print();
	//system("pause>0");

	clsMyStack <int> MyStack;
	MyStack.push(10);
	MyStack.push(20);
	MyStack.push(30);
	MyStack.push(40);
	MyStack.push(50);
	cout << "\nStack: \n";
	MyStack.Print();
	cout << "\nStack Size: " << MyStack.Size();
	cout << "\nStack Top: " << MyStack.Top();
	cout << "\nStack Bottom: " << MyStack.Bottom();
	MyStack.pop();
	cout << "\n\nStack after pop() : \n";
	MyStack.Print();
	//Extension #1
	cout << "\n\n Item(2) : " << MyStack.GetItem(2);
	//Extension #2
	MyStack.Reverse();
	cout << "\n\nStack after reverse() : \n";
	MyStack.Print();
	//Extension #3
	MyStack.UpdateItem(2, 600);
	cout << "\n\nStack after updating Item(2) to 600 : \n";
	MyStack.Print();
	//Extension #4
	MyStack.InsertAfter(2, 800);
	cout << "\n\nStack after Inserting 800 after Item(2) : \n";
	MyStack.Print();
	//Extension #5
	MyStack.InsertAtFront(1000);
	cout << "\n\nStack after Inserting 1000 at top: \n";
	MyStack.Print();
	//Extension #6
	MyStack.InsertAtBack(2000);
	cout << "\n\nStack after Inserting 2000 at bottom: \n";
	MyStack.Print();
	//Extension #7
	MyStack.Clear();
	cout << "\n\nStack after Clear(): \n";
	MyStack.Print();
	system("pause>0");
}