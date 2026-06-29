/*
 * Peer Review by Kimoade
 * This program calculates a receipt subtotal, tax, tip, and total
 * based on user input for three items and a tip percentage.
 */
#include <iomanip>
#include <iostream>
#include "receipt.hpp"

using namespace std;

int main() {
    // Variable declarations
    double item1 = 0.0;
    double item2 = 0.0;
    double item3 = 0.0;
    double tipPercent = 0.0;

    cout << "--------------------------" << endl;
    cout << "    Receipt Calculator    " << endl;
    cout << "--------------------------" << endl << endl;

    // Get input from user
    cout << "Enter price for item 1: ";
    cin >> item1;

    cout << "Enter price for item 2: ";
    cin >> item2;

    cout << "Enter price for item 3: ";
    cin >> item3;

    cout << "Enter tip percentage (e.g., 15 for 15%): ";
    cin >> tipPercent;

    // Perform calculations using library functions
    double subtotal = calculateSubtotal(item1, item2, item3);
    double tax = calculateTax(subtotal);
    double tip = calculateTip(subtotal, tipPercent);
    double total = calculateTotal(subtotal, tax, tip);

    // Output results with formatting
    cout << fixed << setprecision(2);
    cout << "\n--- Receipt Summary ---" << endl;
    cout << "Subtotal: $" << setw(8) << subtotal << endl;
    cout << "Tax:      $" << setw(8) << tax << endl;
    cout << "Tip:      $" << setw(8) << tip << endl;
    cout << "Total:    $" << setw(8) << total << endl;
    cout << "-----------------------" << endl;

    return 0;
}
