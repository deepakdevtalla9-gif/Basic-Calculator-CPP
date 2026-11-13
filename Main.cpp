
#include <iostream>
using namespace std;

int main() {
    int choice;
    double num1, num2, result;
    char again;

    do {
        cout << "\n===== BASIC CALCULATOR =====\n";
        cout << "1. Addition (+)\n";
        cout << "2. Subtraction (-)\n";
        cout << "3. Multiplication (*)\n";
        cout << "4. Division (/)\n";

        cout << "\nEnter your choice (1-4): ";
        cin >> choice;

        if (choice < 1 || choice > 4) {
            cout << "Invalid choice! Please select 1-4.\n";
        }
        else {
            cout << "Enter first number: ";
            cin >> num1;

            cout << "Enter second number: ";
            cin >> num2;

            switch (choice) {
                case 1:
                    result = num1 + num2;
                    cout << "Result = " << result << endl;
                    break;

                case 2:
                    result = num1 - num2;
                    cout << "Result = " << result << endl;
                    break;

                case 3:
                    result = num1 * num2;
                    cout << "Result = " << result << endl;
                    break;

                case 4:
                    if (num2 == 0) {
                        cout << "Error! Division by zero is not allowed.\n";
                    }
                    else {
                        result = num1 / num2;
                        cout << "Result = " << result << endl;
                    }
                    break;
            }
        }

        cout << "\nDo you want to calculate again? (y/n): ";
        cin >> again;

    } while (again == 'y' || again == 'Y');

    cout << "\nThank you for using Basic Calculator!\n";

    return 0;
}
