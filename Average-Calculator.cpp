/*
Take K integers from the keyboard using a loop and print their average value on the screen.
Sample Input:
K=10
integers: 2 5 6 14 10 17 12 7 1
Sample Output:	Average Value: 7.4
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
	float avg;
	int i = 1;
	float temp = 0;
	while (i <= k)
	{
		cout << "Input " << i << " number: ";
		cin >> number;
		temp += number;
		i++;
	}
	avg = temp / k;
	cout << "The average of " << k << " Numbers is: " << avg;
	return 0;
}