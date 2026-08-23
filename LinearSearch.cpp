#include <iostream>
using namespace std;

int main()
{
    int n, arr[100], search, position = -1;

    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter " << n << " elements:" << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the element to search: ";
    cin >> search;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == search)
        {
            position = i;
            break;
        }
    }

    if (position != -1)
    {
        cout << "Element found at position: " << position + 1 << endl;
    }
    else
    {
        cout << "Element not found." << endl;
    }

    return 0;
}