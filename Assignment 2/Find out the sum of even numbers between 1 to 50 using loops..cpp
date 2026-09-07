// Name: Balaji Sawant
// PRN: B25ET1069
// Div: SY1, Batch: C1

#include <iostream>
using namespace std;

int main()
{
    int sum = 0; // Stores the sum

    // Run loop from 1 to 50
    for (int i = 1; i <= 50; i++)
    {
        // Check whether the number is even
        if (i % 2 == 0)
        {
            sum = sum + i; // Add the number
        }
    }

    // Display the final sum
    cout << "Sum of even numbers between 1 and 50 = " << sum;

    return 0; // Program ends here
}
