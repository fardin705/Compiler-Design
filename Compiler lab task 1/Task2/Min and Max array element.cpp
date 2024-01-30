#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) {
        cout<<"Enter element "<<i + 1<<":";
        cin >> arr[i];
    }


    int minElement = arr[0];
    int maxElement = arr[0];


    for (int i = 1; i < n; i++) {
        if (arr[i] < minElement) {
            minElement = arr[i];
        }
        if (arr[i] > maxElement) {
            maxElement = arr[i];
        }
    }

    cout << "Minimum element: " << minElement << endl;
    cout << "Maximum element: " << maxElement << endl;

    return 0;
}
