/*
digit: 456
sum of digit: 4+5+6=15
product of digits: 4*5*6=120
subtract: 120-15 = 105
*/

#include <iostream>
using namespace std;
int sumOfDigits(int num)
{
    int sum = 0;
    while (num != 0)
    {
        int temp = num % 10;
        sum += temp;
        num = num / 10;
    }
    return sum;
}
int productOfDigits(int num)
{
    int prod = 1;
    while (num != 0)
    {
        int temp = num % 10;
        prod *= temp;
        num = num / 10;
    }
    return prod;
}
int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int sum = sumOfDigits(num);
    printf("sum of digits = %d", sum);

    int prod = productOfDigits(num);
    printf("product of digits = %d", sum);

    int subtract = prod - sum;
    cout << "Subtraction: " << prod << "-" << sum << "=" << subtract;

    return 0;
}