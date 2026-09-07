// Name: Balaji Sawant
// PRN: B25ET1069
// Div: SY1, Batch: C1

#include <iostream>
using namespace std;

// Class for complex numbers
class Complex
{
    float real, imag;

public:
    // Take real and imaginary values
    void accept()
    {
        cout << "Enter real part: ";
        cin >> real;

        cout << "Enter imaginary part: ";
        cin >> imag;
    }

    // Display the complex number
    void display()
    {
        cout << real;

        if (imag >= 0)
            cout << " + " << imag << "i";
        else
            cout << " - " << -imag << "i";

        cout << endl;
    }

    // Add two complex numbers
    Complex add(Complex c)
    {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }

    // Multiply two complex numbers
    Complex multiply(Complex c)
    {
        Complex temp;
        temp.real = real * c.real - imag * c.imag;
        temp.imag = real * c.imag + imag * c.real;
        return temp;
    }

    // Subtract two complex numbers
    Complex subtract(Complex c)
    {
        Complex temp;
        temp.real = real - c.real;
        temp.imag = imag - c.imag;
        return temp;
    }

    // Divide two complex numbers
    Complex divide(Complex c)
    {
        Complex temp;

        float denominator = c.real * c.real + c.imag * c.imag;

        temp.real = (real * c.real + imag * c.imag) / denominator;
        temp.imag = (imag * c.real - real * c.imag) / denominator;

        return temp;
    }

    // Find conjugate of the number
    Complex conjugate()
    {
        Complex temp;
        temp.real = real;
        temp.imag = -imag;
        return temp;
    }
};

int main()
{
    Complex c1, c2, result;

    cout << "Enter first complex number:\n";
    c1.accept();

    cout << "\nEnter second complex number:\n";
    c2.accept();

    cout << "\nAddition: ";
    result = c1.add(c2);
    result.display();

    cout << "Multiplication: ";
    result = c1.multiply(c2);
    result.display();

    cout << "Subtraction: ";
    result = c1.subtract(c2);
    result.display();

    cout << "Division: ";
    result = c1.divide(c2);
    result.display();

    cout << "Conjugate of first number: ";
    result = c1.conjugate();
    result.display();

    return 0;
}
