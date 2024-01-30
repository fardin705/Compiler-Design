#include <iostream>
using namespace std;

int main() {

  int number;

  cout << "Enter a non-negative integer: ";
  cin >> number;


  if (number < 0) {
    cerr << "Error: Factorial is not defined for negative numbers." << endl;
    return 1;
  }


  long long factorial = 1;


  for (int i = 1; i <= number; ++i) {
    factorial *= i;
  }


  cout << "The factorial of " << number << " is: " << factorial << endl;

  return 0;
}
