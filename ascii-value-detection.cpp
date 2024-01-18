/*
Take a character input from the user and tell whether the number is a capital letter or a small letter.

Sample Input: A
Sample Output: Capital letter

Sample Input: g
Output:	small letter

Sample Input: )
Sample Output: Non
*/



//Coding Part starts from here
#include<iostream>
using namespace std;

int main()
{
	char character;
	cout << "Enter a character: ";
	cin >> character;

	if (character >= 'A' && character <= 'Z') {
		cout << "Your entered character is capital.";
	}
	else if (character >= 'a' && character <= 'z') {
		cout << "Your entered character is small.";
	}
	else {
		cout << "Your entered an invalid character.";
	}
	return 0;
}