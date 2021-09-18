// Assignment 5.4 File Processing with Numbers
// Next write a program that opens the file, reads all the numbers from the file, 
// and calculates the sum, quantity, and average.


#include <iostream>
#include <fstream>
using namespace std;

int main()
{

    string fileName;
    int number = 0, sum = 0, quantity = 0;
    double average = 0;
    fstream incoming;

    cout << "Enter a filename with numbers: ";
    cin >> fileName;

    incoming.open(fileName);

    while(!incoming)
    {
        cout << "File not found. Please try again." << endl;
        cout << "Enter a filename with numbers: ";
        cin >> fileName;
        incoming.open(fileName);
    }

    incoming >> number;

    while (incoming)
    {
        cout << number << endl;
        quantity ++;
        sum += number;
        average = sum / quantity;
        incoming >> number;
    }

    cout << "Data in random.txt ha sbeen successfully read and processed......" << endl;
    cout << "Number of the numbers: " << quantity << endl;
    cout << "Sum of the numebrs: " << sum << endl;
    cout << "Average of the numbers: " << average << endl;

    incoming.close();

    return 0;
}
