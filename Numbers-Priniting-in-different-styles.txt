
/*
Question 1: Write a program that prints numbers in increasing order within the range of 100 to 200 (inclusive).
Question 2: Write a program that prints even numbers within the range of 100 to 200 (inclusive).
Question 3: Write a program that prints odd numbers within the range of 100 to 200.
Question 4: Write a program that prints multiples of 5 within the range of 100 to 200 (inclusive).
*/



//Coding Part starts from here
#include <iostream>
using namespace std;

//Question 1:
int main()
{
    int range1 = 100;
    int range2 = 200;
    while (range1 <= range2)
    {
        cout << range1 << " ";
        range1++;
    }
    return 0;
}

//Question 2:
int main()
{
    int range1 = 100;
    int range2 = 200;
    while (range1 <= range2)
    {
        if ((range1 % 2) != 0)
            cout << range1 << " ";
        range1++;
    }
    return 0;
}

//Question 3:
int main()
{
    int range1 = 100;
    int range2 = 200;
    while (range1 <= range2)
    {
        if ((range1 % 2) == 0)
            cout << range1 << " ";
        range1++;
    }
    return 0;
}

//Question 4:
int main()
{
    int range1 = 100;
    int range2 = 200;
    while (range1 <= range2)
    {
        cout << range1 << " ";
        range1 += 5;
    }
    return 0;
}