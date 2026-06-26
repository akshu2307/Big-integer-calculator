#include <iostream>
#include "BigInteger.h"

using namespace std;

int main()
{
    while (true)
    {
        cout << "\n=====================================\n";
        cout << "      BIG INTEGER CALCULATOR\n";
        cout << "=====================================\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "5. Modulus\n";
        cout << "6. Compare Numbers\n";
        cout << "7. Increment a Number\n";
        cout << "8. Decrement a Number\n";
        cout << "9. Unary Minus\n";
        cout << "0. Exit\n";

        int choice;
        cout << "\nEnter your choice: ";
        cin >> choice;

        if (choice == 0)
        {
            cout << "\nThank you for using Big Integer Calculator!\n";
            break;
        }

        string num1, num2;

        if (choice >= 1 && choice <= 6)
        {
            cout << "\nEnter first number: ";
            cin >> num1;

            cout << "Enter second number: ";
            cin >> num2;

            BigInteger a(num1);
            BigInteger b(num2);

            switch (choice)
            {
                case 1:
                    cout << "\nResult = " << string(a + b) << endl;
                    break;

                case 2:
                    cout << "\nResult = " << string(a - b) << endl;
                    break;

                case 3:
                    cout << "\nResult = " << string(a * b) << endl;
                    break;

                case 4:
                    if (num2 == "0")
                        cout << "\nDivision by zero is not allowed.\n";
                    else
                        cout << "\nResult = " << string(a / b) << endl;
                    break;

                case 5:
                    if (num2 == "0")
                        cout << "\nDivision by zero is not allowed.\n";
                    else
                        cout << "\nResult = " << string(a % b) << endl;
                    break;

                case 6:
                    if (a == b)
                        cout << "\nBoth numbers are equal.\n";
                    else if (a > b)
                        cout << "\nFirst number is greater.\n";
                    else
                        cout << "\nSecond number is greater.\n";
                    break;
            }
        }
        else if (choice == 7)
        {
            cout << "\nEnter number: ";
            cin >> num1;

            BigInteger a(num1);
            ++a;

            cout << "After Increment = " << string(a) << endl;
        }
        else if (choice == 8)
        {
            cout << "\nEnter number: ";
            cin >> num1;

            BigInteger a(num1);
            --a;

            cout << "After Decrement = " << string(a) << endl;
        }
        else if (choice == 9)
        {
            cout << "\nEnter number: ";
            cin >> num1;

            BigInteger a(num1);

            cout << "Unary Minus = " << string(-a) << endl;
        }
        else
        {
            cout << "\nInvalid choice. Please try again.\n";
        }
    }

    return 0;
}