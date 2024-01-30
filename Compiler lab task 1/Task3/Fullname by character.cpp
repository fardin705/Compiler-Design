#include <iostream>

using namespace std;

int main() {
    const int maxChars = 50;

    char firstName[maxChars];
    char lastName[maxChars];
    char fullName[2 * maxChars];

    // Input first name using stack
    char c;
    int topFirst = 0;
    cout << "Enter first name character by character (enter '.' to finish): ";
    while ((c = getchar()) != '.' && topFirst < maxChars - 1) {
        cin.ignore();
        firstName[topFirst++] = c;
    }
    firstName[topFirst] = '\0'; // Ensure null-terminated string

    // Input last name using stack
    int topLast = 0;
    cout << "Enter last name character by character (enter '.' to finish): ";
    cin.ignore();
    while ((c = getchar()) != '.' && topLast < maxChars - 1) {
        cin.ignore();
        lastName[topLast++] = c;
    }
    lastName[topLast] = '\0'; // Ensure null-terminated string

    // Merge first name and last name
    int i = 0;
    while (firstName[i] != '\0') {
        fullName[i] = firstName[i];
        ++i;
    }

    fullName[i] = ' '; // Add space between first and last name
    ++i;

    int j = 0;
    while (lastName[j] != '\0') {
        fullName[i + j] = lastName[j];
        ++j;
    }

    fullName[i + j] = '\0'; // Ensure null-terminated string


    cout << "Full name: " << fullName << endl;

    return 0;
}
