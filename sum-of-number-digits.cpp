/*
Write and run a program that reads a six-digit integer and prints the sum of its six digits.

Sample Input: 153426
Sample output: 21
*/



//Coding Part starts from here
#include<iostream>
using namespace std;

int main()
{
	int num, result = 0, sum = 0;
	cout << "Enter the 6-digit number: ";
	cin >> num;
	while (num > 999999 || num < 0)
	{
		cout << "Your number is incorrect.\nEnter number again: ";
		cin >> num;
	}
	int i = 1;
	int temp = num;
	while (i <= 6)
	{
		sum = temp % 10;
		temp = temp / 10;
		result += sum;
		i++;
	}
	cout << "The sum of the 6-digit number " << num << " is: " << result << endl;
	return 0;
}