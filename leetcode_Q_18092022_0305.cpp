/*

Checking the number of 1 in a binary number
n= 00000000000110000010
digits= 3

*/

#include <iostream>
using namespace std;

int main()
{
    uint32_t n = 00001111001001; // unsigned int of 32 bit
    // cout << "Enter the Unum: ";
    // cin >> n;
    int count = 0;
    // calculating the one bits
    while (n != 0)
    {
        if (n & 1)
        {
            count++;
            // printf("yes\n");
        }

        n = n >> 1; // right shift the n by 1 place
    }
    cout << "No. of 1 is : " << count;
    return 0;
}