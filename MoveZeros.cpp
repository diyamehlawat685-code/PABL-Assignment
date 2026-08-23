#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " elements:" << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int index = 0;

    // Store all non-zero elements first
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            arr[index] = arr[i];
            index++;
        }
    }

    // Put zeros at the end
    while (index < n)
    {
        arr[index] = 0;
        index++;
    }

    cout << "Array after moving zeros to the end: ";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}