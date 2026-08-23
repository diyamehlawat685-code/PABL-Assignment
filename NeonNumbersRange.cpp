#include <iostream>
using namespace std;

int main()
{
    int start, end;

    cout << "Enter starting number: ";
    cin >> start;

    cout << "Enter ending number: ";
    cin >> end;

    cout << "Neon numbers are: ";

    for (int num = start; num <= end; num++)
    {
        int square = num * num;
        int sum = 0;

        while (square != 0)
        {
            sum = sum + square % 10;
            square = square / 10;
        }

        if (sum == num)
        {
            cout << num << " ";
        }
    }

    return 0;
}