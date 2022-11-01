/**
 * @file switchCase2.cpp
 * @author Aditya (banzo.aditya@gmail.com)
 * @brief The Program that can tell you how many 100Rs, 50Rs, 20Rs, 1Rs Notes are needed for a given amount of money
 * @date 2022-11-01
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <iostream>
using namespace std;
int main()
{
    int amt, choice;
    cout << "Enter the amount: ";
    cin >> amt;
    cout << "Total no. of \n1. 100 Rs\n2. 50 Rs\n3. 20 Rs \n4. 1 Rs\nChoose one: ";
    cin >> choice;
    switch (choice)
    {
    case 1:
        cout << amt / 100 << " notes of 100 is needed at max.\n";
        break;

    case 2:
        amt = amt - ((amt / 100) * 100);
        cout << amt / 50 << " notes of 50 is needed at max.\n";
        break;

    case 3:
        // amt = am;
        cout << amt / 20 << " notes of 20 is needed at max.\n";
        break;

    case 4:
        amt = amt / 100;
        amt = amt / 50;
        amt = amt / 20;
        cout << amt / 1 << " notes of 1 is needed at max.\n";
        break;

    default:
        cout << "Invalid choice" << endl;
        break;
    }
}