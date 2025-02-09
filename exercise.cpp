#include <iostream>
using namespace std;

int main() {
    int one, two;
    int array1[10], array2[10], combinedArray[20]; // Limits the elements that can be stored
    char ans;
    
    do{
    int combinedSize = 0;
    
    // Input for Array 1 with validation
    do {
        cout << "How many elements for Array 1? (max of 10): ";
        cin >> one;
        if (one <= 0 || one > 10) {
            cout << "You can only enter 1-10 elements." << endl;
        }
    } while (one <= 0 || one > 10);  // Repeat input request if invalid

    for (int i = 0; i < one; i++) {
        cout << "Element " << i + 1 << ": ";
        cin >> array1[i];
    }

    cout << endl;

    // Input for Array 2 with validation
    do {
        cout << "How many elements for Array 2? (max of 10): ";
        cin >> two;
        if (two <= 0 || two > 10) {
            cout << "You can only enter 1-10 elements." << endl;
        }
    } while (two <= 0 || two > 10);  // Repeat input request if invalid

    for (int j = 0; j < two; j++) {
        cout << "Element " << j + 1 << ": ";
        cin >> array2[j];
    }

    // Add elements from array1 to combinedArray
    for (int i = 0; i < one; i++) {
        combinedArray[combinedSize] = array1[i];
        combinedSize++;
    }

    // Add elements from array2 to combinedArray
    for (int j = 0; j < two; j++) {
        combinedArray[combinedSize] = array2[j];
        combinedSize++;
    }

    // Sorting the combined array in descending order (Bubble Sort)
    for (int i = 0; i < combinedSize - 1; i++) {
        for (int j = 0; j < combinedSize - i - 1; j++) {
            if (combinedArray[j] < combinedArray[j + 1]) {
                int temp = combinedArray[j];
                combinedArray[j] = combinedArray[j + 1];
                combinedArray[j + 1] = temp;
            }
        }
    }

    // Output the sorted combined array
    cout << "Combined and sorted array: ";
    for (int i = 0; i < combinedSize; i++) {
        cout << combinedArray[i] << " ";
    }

    cout << endl;
          do {
            cout << "Try Another [Y/N]: ";
            cin >> ans;

            // If invalid input, inform the user
            if (ans != 'Y' && ans != 'y' && ans != 'N' && ans != 'n') {
                cout << "Please input Y/N only." << endl;
            }

        } while (ans != 'Y' && ans != 'y' && ans != 'N' && ans != 'n');  // Only accepts 'Y', 'y', 'N', 'n'

    } while (ans == 'Y' || ans == 'y');  // Continue if the user inputs 'Y' or 'y'


    return 0;
}
