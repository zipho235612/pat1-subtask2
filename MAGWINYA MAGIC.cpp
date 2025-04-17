#include <iostream>
using namespace std;

int main() {
    int temp1, temp2, temp3;

    // Input first and second temperature readings
    cout << "Enter the first temperature reading: ";
    cin >> temp1;
    cout << "Enter the second temperature reading: ";
    cin >> temp2;

    // Check if the temperature difference is too high
    if ((temp2 - temp1) > 50) {
        cout << "Reduce fryer heat before taking the third reading." << endl;
        return 0; // Exit program
    }

    // Input third temperature reading
    cout << "Enter the third temperature reading: ";
    cin >> temp3;

    // Analyze third temperature reading
    if (temp3 <= temp1) {
        cout << "Increase the Fryer heat before taking the third reading." << endl;
    } else if (temp3 >= 150 && temp3 <= 190) {
        cout << "You may start frying the Magwinyas." << endl;
    } else {
        cout << "Oil is not ready for frying!" << endl;
    }

    return 0;
}
