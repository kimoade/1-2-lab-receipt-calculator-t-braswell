#include "receipt.hpp"

// TODO: Return the sum of all three item prices.
double calculateSubtotal(double item1, double item2, double item3) {
  double subtotal=item1 + item2 + item3;
  return subtotal;
}

// TODO: Return the sales tax for the subtotal using TAX_RATE.
double calculateTax(double subtotal) {
  double TAX_RATE=0.0775;
    return TAX_RATE * subtotal;
}

// TODO: Return the tip amount.
// Example: if subtotal is 20.00 and tipPercent is 15,
// the tip should be 3.00.
double calculateTip(double subtotal, double tipPercent) {
  return subtotal * tipPercent / 100.00;
}

// TODO: Return the final total.
double calculateTotal(double subtotal, double tax, double tip) {
  return subtotal + tax + tip ;
}
