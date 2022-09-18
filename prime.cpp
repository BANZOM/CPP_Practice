#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;
    if (num < 0)
    {
        cout << "Prime number of negative numbers is not possible yet.";
        return 0;
    }
    else if (num == 0)
    {
        cout << "Zero is neither prime nor composite.";
        return 0;
    }

    else if (num == 1)
    {
        cout << "1 is a composite number.";
        return 0;
    }
    else if (num == 2)
    {
        cout << num << " is a prime number.";
        return 0;
    }

    else
    {
        bool isPrime = 1;

        for (int i = 2; i < num; i++)
        {
            if (num % i == 0)
            {
                isPrime = 0; // if enters into this body that means the num is not a prime.
                break;
            }
        }

        if (isPrime == 1)
        {
            printf("%d is a prime number.", num);
        }
        else
        {
            printf("%d is not a prime number.", num);
        }
    }

    return 0;
}
