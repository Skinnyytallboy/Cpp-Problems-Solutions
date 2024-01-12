/*
Write a program that prompts the user to enter a positive integer (N) and then prints the sum of all the multiples of any two numbers entered that are less than N.
*/



//Coding Part starts from here
#include<iostream>
using namespace std;

int main()
{
	int PNum, Mul_1, Mul_2;
	cout << "Enter the positive integer: ";
	cin >> PNum;
	cout << "Enter two numbers :";
	cin >> Mul_1 >> Mul_2;
	int sum1 = 0, sum2 = 0, both = 0, common;
	common = Mul_1 + Mul_2;
	int temp = Mul_1;
	while (temp < PNum)
	{
		sum1 += temp;
		temp += Mul_1;
	}
	temp = Mul_2;
	while (temp < PNum)
	{
		sum2 += temp;
		temp += Mul_2;
	}
	both = Mul_1 * Mul_2;
	temp = sum1 + sum2 - both;
	cout << "The sum of Multiples of " << Mul_1 << " & " << Mul_2 << " less than " << PNum << " is: " << temp;
	return 0;
}