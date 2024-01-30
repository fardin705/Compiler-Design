#include <iostream>

using namespace std;
int main() {

    int arraySize;
    cout << "Enter the size of the array: ";
    cin >> arraySize;


    int userArray[arraySize];

    cout << "Enter " << arraySize << " elements of the array:\n";
    for (int i = 0; i < arraySize; ++i) {
        std::cout << "Element " << i + 1 << ": ";
        std::cin >> userArray[i];
    }

    int sum = 0;
    for (int i = 0; i < arraySize; ++i) {
        sum += userArray[i];
    }

    double average = (sum) / arraySize;

    cout << "Average: " << average << endl;

    return 0;
}
