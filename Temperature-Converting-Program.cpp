/*
Part 1; Write a program that prompts the user to enter a temperature in Celsius (C) from the keyboard. The program should then convert the temperature to both Fahrenheit (F) and Kelvin (K) using the following formulas:
Fahrenheit (F) = (9.0/5 * C) + 32
Kelvin (K) = C + 273.15
Sample Input: C = 12.3
Sample Output: F = 54.14, K = 285.45

Part 2:Write a program that prompts the user to enter a temperature in Fahrenheit (F). The program should then convert the temperature to both Celsius (C) and Kelvin (K) using the following formulas:
Celsius (C) = (F - 32) * 5/9
Kelvin (K) = (F - 32) * 5/9 + 273.15
Sample Input: F = 54.14
Sample Output: C = 12.30, K = 285.45

Part 3:Write a program that prompts the user to enter a temperature in Kelvin (K). The program should then convert the temperature to both Celsius (C) and Fahrenheit (F) using the following formulas:
Celsius (C) = K - 273.15
Fahrenheit (F) = (K - 273.15) * 9/5 + 32
Sample Input: K = 285.45
Sample Output: C = 12.30, F = 54.14
*/

/*
Note that the formula is written here, but you have to remeber this short and easy (physics) formula for future use.
*/



//Coding Part starts from here
#include<iostream>
using namespace std;

//Part 1
int main()
{
	float C, F, K;
	cout << "Enter Temperature in Celcius(C): ";
	cin >> C;
	F = ((9.0 / 5) * C) + 32;
	K = C + 273.15;
	cout << "Temperature in Fahrenheit(F): " << F << endl;
	cout << "Temperature in Kelvin(K): " << K << endl;
	return 0;
}

//Part 2
int main()
{
	float F, K, C;
	cout << "Enter Temperatur in Fahrenheit(F): ";
	cin >> F;
	C = (F - 32) * 5 / 9;
	K = (F - 32) * 5 / 9 + 273.15;
	cout << "Temperature in Kelvin(K): " << K << endl;
	cout << "Temperature in Celcius(C): " << C << endl;
	return 0;
}

//Part 3
int main()
{
	float K, C, F;
	cout << "Enter Temperature in Kelvin(K): ";
	cin >> K;
	F = K - 273.15;
	C = (K - 273.15) * 9 / 5 + 32;
	cout << "Temperature in Celcius(C): " << C << endl;
	cout << "Temperature in Fahrenheit(F): " << F << endl;
	return 0;
}