// Name: Balaji Sawant
// PRN: B25ET1069
// Div: SY1, Batch: C1

#include <iostream>
using namespace std;

// Add three float values
float add(float i, float j, float k)
{
    return (i + j + k);
}

// Add two integer values
int add(int a, int b)
{
    return (a + b);
}

// Add two float values
int add(float m, float n)
{
    return (m + n);
}

int main()
{
    // Add three float numbers
    cout << add(42.5f, 16.3f, 9.2f) << endl;

    // Add two integer numbers
    cout << add(48, 32) << endl;

    // Add two float numbers
    cout << add(72.65f, 18.25f) << endl;

    return 0;
}
