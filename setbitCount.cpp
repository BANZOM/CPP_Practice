#include <iostream>
using namespace std;

int bitCount(int n)
{
    int sum = 0;
    while (n)
    {
        if (n & 1 == 1)
        {
            sum += 1;
        }
        // cout << sum << endl;
        n = n >> 1;
    }
    return sum;
}

int main(int argc, char const *argv[])
{
    int a, b;
    cout << "Enter two numbers : ";
    cin >> a >> b;
    // cout << bitCount(b) << endl;
    cout << "Total no. of setBits = " << bitCount(a) + bitCount(b) << endl;
    return 0;
}
