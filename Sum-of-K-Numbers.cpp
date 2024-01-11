/*
:Write a program that first asks the user a number K. Then take K integers from the keyboard using a loop and print their sum on the screen.
*/



//Coding Part starts from here
#include<iostream>
using namespace std;

int main()
{
	int k;
	cout << "Input k: ";
	cin >> k;
	int number;
	int i = 1;
	int temp = 0;
	while (i <= k)
	{
		cout << "Input " << i << " number: ";
		cin >> number;
		temp += number;
		i++;
	}
	cout << "The Sum of " << k << " Numbers is: " << temp;
	return 0;
}