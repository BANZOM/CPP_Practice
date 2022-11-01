/**
 * @file switchCase1.cpp
 * @author Aditya (you@domain.com)
 * @brief Implementing Switch case statements to terminate the infinite loop
 * @version 0.1
 * @date 2022-11-01
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    cout << "Loop begins" << endl;
    int i = 0;
    while (1)
    {
        i++;
        switch (i)
        {
        case 5:
            exit(0);  

        default:
            cout << "The value of i is " << i << endl;
            break;
        }
    }
    cout << "Loop is terminated" << endl;
    return 0;
}
