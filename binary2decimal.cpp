#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    unsigned long long int binary; // unsigned bcz binary will always be in 0s and 1s
    cout << "Enter a binary number: ";
    cin >> binary;

    long long int decimal = 0;
    int i = 0;
    while (binary)
    {
        int lsb = binary % 10;
        if (lsb == 1)
        {
            decimal += pow(2, i);
        }
        i++;
        binary /= 10;
    }

    cout << "The Equivalent decimal no. is : " << decimal << endl;
}