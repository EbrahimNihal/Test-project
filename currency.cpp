#include <iostream>
#include <ctype.h>
using namespace std;

int main()
{
    // currency conversion for indian rupees
    double rupees;
    cout << "Enter the amount in rupees: ";
    cin >> rupees;
    cout << "The amount in rupees is : " << rupees << endl;
    cout << "1. US Dollars" << endl;
    cout << "2. British Pounds" << endl;
    cout << "3. Euro" << endl;
    cout << "4. Japanese Yen" << endl;
    cout << "5. Chinese Yuan" << endl;
    cout << "6. korean Won" << endl;
    cout << "Enter the currency to convert(Enter the first letter of currency in caps): " << endl;
    char choice;
    cin >> choice;
    toupper(choice);
    switch (choice)
    {
    case 'U':
    {
        // convert rupees to american dollars
        double dollars = rupees * 0.013;
        cout << "The amount in dollar is: " << dollars << endl;
        break;
    }
    case 'E':
    {
        // convert rupees to euro
        double euro = rupees * 0.012;
        cout << "The amount in euro is: " << euro << endl;
        break;
    }
    case 'P':
    { // convert rupees to pound
        double pound = rupees * 0.0098;
        cout << "The amount in pound is: " << pound << endl;
        break;
    }
    case 'J':
    {
        // convert rupees to yen
        double yen = rupees * 1.54;
        cout << "The amount in yen is: " << yen << endl;
        break;
    }
    case 'C':
    {
        // convert rupees to yuan
        double yuan = rupees * 0.085;
        cout << "The amount in yuan is: " << yuan << endl;
        break;
    }
    case 'w':
    {
        // convert rupees to won
        double won = rupees * 15.95;
        cout << "The amount in won is: " << won << endl;
        break;
    }
    default:
    {
        cout << "Invalid choice!" << endl;
        break;
    }
    }
    return 0;
}