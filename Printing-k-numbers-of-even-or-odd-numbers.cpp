/*
Write a program to print the first K (K should be asked from the user) even or odd numbers using a loop.
*/



//Coding Part starts from here
#include<iostream>
using namespace std;

int main()
{
	int k;
	cout << "Input k: ";
	cin >> k;
	cout << "Print even numbers == 1" << endl;
	cout << "Print odd numbers  == 2" << endl;
	int choice;
	cin >> choice;
	int temp = 1;
	int evens = 2;
	int odds = 1;
	int i = 0;
	if (choice == 1)
	{
		while (temp <= k)
		{
			if (i % 2 == 0)
			{
				cout << i << " ";
				temp++;
			}
			i++;
		}
	}
	else if (choice == 2)
	{
		while (temp <= k)
		{
			if (i % 2 != 0)
			{
				cout << i << " ";
				temp++;
			}
			i++;
		}
	}
	else
	{
		cout << "Invalid Choice...!";
	}
	return 0;
}