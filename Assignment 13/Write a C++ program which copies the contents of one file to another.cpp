
// Name: Balaji Sawant
// PRN: B25ET1069
// SY1 C1

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string sourceFile, destinationFile;

    cout << "Enter source file name: ";
    cin >> sourceFile;

    cout << "Enter destination file name: ";
    cin >> destinationFile;

    // Prevent copying a file onto itself
    if (sourceFile == destinationFile)
    {
        cout << "Error: Source and destination files must be different."
             << endl;
        return 1;
    }

    // Open the source file
    ifstream source(sourceFile);

    if (!source.is_open())
    {
        cout << "Error: Unable to open source file." << endl;
        return 1;
    }

    // Open the destination file
    ofstream destination(destinationFile);

    if (!destination.is_open())
    {
        cout << "Error: Unable to open destination file." << endl;
        source.close();
        return 1;
    }

    // Copy the contents of the source file
    destination << source.rdbuf();

    // Check for write errors
    if (destination.fail())
    {
        cout << "Error: File copying failed." << endl;
        source.close();
        destination.close();
        return 1;
    }

    // Close both files
    source.close();
    destination.close();

    cout << "File copied successfully." << endl;

    return 0;
}
