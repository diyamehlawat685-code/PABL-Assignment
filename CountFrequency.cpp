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

    int element;

    cout << "Enter the element whose frequency you want to find: ";
    cin >> element;

    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == element)
        {
            count++;
        }
    }

    cout << "Frequency of " << element << " is: " << count << endl;

    return 0;
}