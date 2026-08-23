#include <iostream>
using namespace std;

int main()
{
    int num;
    bool isPrime = true;

    cout << "Enter a number: ";
    cin >> num;

    if (num <= 1)
    {
        isPrime = false;
    }

    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            isPrime = false;
            break;
        }
    }

    if (isPrime)
    {
        cout << num << " is a Prime Number";
    }
    else
    {
        cout << num << " is not a Prime Number";
    }

    return 0;
}