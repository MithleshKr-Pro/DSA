#include <iostream>
using namespace std;

int main()
{

    int n;
    cin>>n;

    int arr[n+1];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // insertion sort

    for (int i = 1; i < n; i++)
    {
        for (int j = i - 1; j >= 0; j--)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j + 1], arr[j]);
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}