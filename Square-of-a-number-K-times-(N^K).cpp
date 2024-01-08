/*
Write a program that takes two numbers, K and N, and calculates N raised to the power of K (N^K). Finally, display the result.
*/



//Coding Part starts from here
#include<iostream>
using namespace std;

int main()
{
	int N, K, temp;
	cout << "Enter N: ";
	cin >> N;
	cout << "Enter K: ";
	cin >> K;
	int i = 1;
	temp = N;
	while (i < K)
	{
		N = N * temp;
		i++;
	}
	cout << "The N raised to the power of K (N^K) is " << N;
}