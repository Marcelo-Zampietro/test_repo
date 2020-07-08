#include <iostream>
using namespace std;
// Interview Questions

// 1.
// Reverse a Singly Linked List
struct Node
{
	int data;

	Node *link;
};

Node *head = NULL;

void reverseList()
{
	// initializing previous, current, and next
	Node *p, *c, *n;
	p = NULL;
	c = head;
	while (c != NULL)
	{
		n = c->link;
		c->link = p;
		p = c;
		c = n;
	}
	head = p;
}

// Function to insert at the end of linked list
void insertEnd(int d)
{
	Node *ptr = new Node();
	ptr->data = d;
	ptr->link = NULL;

	if (head == NULL)
		head = ptr;
	else
	{
		Node *temp = head;
		while (temp->link != NULL)
		{
			temp = temp->link;
		}
		temp->link = ptr;
	}
}

// Function to display linked list
void displayList()
{
	Node *ptr = head;
	while (ptr != NULL)
	{
		cout << ptr->data << " ";
		ptr = ptr->link; 
	}
	cout << "\n";
}

// Main Function
int main()
{
	insertEnd(1);
	insertEnd(2);
	insertEnd(3);
	insertEnd(4);
	insertEnd(5);
	insertEnd(6);
	
	displayList();
	reverseList();
	displayList();
	return 0;
}





// 2.
// FIZZBUZZ
// first solution
void fizzBuzz(int x)
{
	for (int i = 0; i < x; i++)
		if (i % 3 == 0 && i % 5 == 0)
			cout << "FIZZBUZZ\n";
		else if (i % 3 == 0)
			cout << "FIZZ\n";
		else if (i % 5 == 0)
			cout << "BUZZ\n";
		else
			cout << i << endl;
}

// second solution
void FizzBuzz(int Num)
{
	static int count = 1;
	while (count < Num)
	{
		if ((count % 3 == 0) && (count % 5 == 0))
		{
			cout << "FIZZBUZZ\n";
			count++;
		}
		else if (count % 3 == 0)
		{
			cout << "FIZZ\n";
			count++;
		}
		else if (count % 5 == 0)
		{
			cout << "BUZZ\n";
			count++;
		}
		else
		{
			cout << count << endl;
			count++;
		}
	}
}






// 3.
// Creating 2D Arrays
void TwoDimensionalArrays()
{
	// 2D Array using Single Pointer
	int* array = new int[5 * 5];
	for (int y = 0; y < 5; y++)
	{
		for (int x = 0; x < 5; x++)
		{
			array[x + y * 5] = 2; // setting every value to 2
		}	// every time y increments move 5 elements forward
	}

	delete[] array;

	// 2D Array using 2 Pointers
	int** a2d = new int* [5];
	for (int i = 0; i < 5; i++)
		a2d[i] = new int[5];

	for (int y = 0; y < 5; y++)
	{
		for (int x = 0; x < 5; x++)
		{
			a2d[y][x] = 2; // setting every value to 2
		}
	}

	for (int i = 0; i < 5; i++)
		delete[] a2d[i];
	delete[] a2d;
}