// Name: Balaji Sawant
// PRN: B25ET1069
// Div: SY1, Batch: C1

#include <iostream>
using namespace std;

// Take array values from user
void acceptArray(int arr[], int n)
{
    cout << "Enter elements - ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}

// Show array values
void displayArray(int arr[], int n)
{
    cout << "Array elements are:\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}

// Exchange two numbers
void swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}

// Arrange array in ascending order
void sorting(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main()
{
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[100];

    acceptArray(arr, n);

    cout << "\nBefore sorting:\n";
    displayArray(arr, n);

    sorting(arr, n);

    cout << "\nAfter sorting:\n";
    displayArray(arr, n);

    return 0;
}
