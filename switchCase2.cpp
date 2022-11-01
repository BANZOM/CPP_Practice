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
    int amt, choice, temp, temp2, temp3;
    cout << "Enter the amount: ";
    cin >> amt;
    cout << "Total no. of \n1. 100 Rs\n2. 50 Rs\n3. 20 Rs \n4. 1 Rs\nChoose one: ";
    cin >> choice;

    temp2 = amt - ((amt / 100) * 100);
    temp3 = temp2 - ((temp2 / 50) * 50);
    temp = temp3 - ((temp3 / 20) * 20);

    switch (1)
    {
    case 1:
        cout << amt / 100 << " notes of 100 is needed at max.\n";

    case 2:
        cout << temp2 / 50 << " notes of 50 is needed at max.\n";

    case 3:
        cout << temp3 / 20 << " notes of 20 is needed at max.\n";

    case 4:
        cout << temp / 1 << " notes of 1 is needed at max.\n";
        break;

    default:
        cout << "Invalid choice" << endl;
    }
    return 0;
}