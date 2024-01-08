/*
Write a program that takes two integers A and B from the user and swap their values using a third temporary variable.

BONUS: Solve the same problem, swap the values of two integers A and B but you are not allowed to use any extra variable other than A and B.
*/



//Coding Part starts from here
#include <iostream>
using namespace std;

//Question
int main()
{
	int A, B, Temp;
	cout << "Enter number A and B: ";
	cin >> A >> B;
	cout << "Before Swap A is " << A << " and B is " << B << endl;
	Temp = A;
	A = B;
	B = Temp;
	cout << "After Swap A is " << A << " and B is " << B << endl;
	return 0;
}

//Bonus
int main()
{
	int A, B;
	cout << "Enter number A and B: ";
	cin >> A >> B;
	cout << "Before Swap A is " << A << " and B is " << B << endl;
	B = A + B;
	A = B - A;
	B = B - A;
	cout << "After Swap A is " << A << " and B is " << B << endl;
	return 0;
}