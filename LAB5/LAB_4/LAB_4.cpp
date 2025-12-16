#include <iostream>
#include <limits> 

using namespace std;

void processInput(int new1, int& min, int& count) {

    count++;
    if (count == 1) {
        min = new1;
    }
    else if (new1 < min) {
        min = new1;
    }

}


// --- Main Function ---
int main() {
    int current;        
    int min = 0;    
    int input = 0;      

    cout << "=======================================================" << endl;

    while (true) {
        cout << "Enter number: ";

        if (!(cin >> current)) {
            cout << "Invalid input. Please enter a valid number." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        if (current == 0) {
            break;
        }
        processInput(current, min, input);
    }

    cout << "\n------------------------------------" << endl;
    if (input > 0) {
        cout << "Total numbers entered: " << input << endl;
        cout << "Minimum value found: " << min << endl;
    }
    else {
        cout << "No numbers were entered (only '0' was entered)." << endl;
    }

    return 0;
}