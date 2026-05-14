#include "temp6.4.hpp"

int main() {
    int intArr[] = { 1, 2, 2, 4, 5 };
    int intSize = 5;

    double doubleArr[] = { 1.1, 2.2, 3.3, 4.4 };
    int doubleSize = 4;

    string stringArr[] = { "apple", "orange", "orange", "banana" };
    int stringSize = 4;

    cout << "Static Examples" << endl;
    cout << "Integer array: 1 2 2 4 5" << endl;
    cout << "Result: " << (hasAdjacentDuplicates(intArr, intSize) ? "Found" : "Not Found") << endl;

    cout << "\nDouble array: 1.1 2.2 3.3 4.4" << endl;
    cout << "Result: " << (hasAdjacentDuplicates(doubleArr, doubleSize) ? "Found" : "Not Found") << endl;

    cout << "\nString array: apple orange orange banana" << endl;
    cout << "Result: " << (hasAdjacentDuplicates(stringArr, stringSize) ? "Found" : "Not Found") << endl;

    cout << "\nUser Input Example" << endl;
    int n;
    cout << "Enter size of your array: ";
    cin >> n;

    if (n > 0) {
        int* userArr = new int[n];
        cout << "Enter " << n << " integers:" << endl;
        for (int i = 0; i < n; i++) {
            cout << "element[" << i << "] = ";
            cin >> userArr[i];
        }

        cout << "\nYour array: ";
        for (int i = 0; i < n; i++) cout << userArr[i] << " ";
        cout << endl;

        if (hasAdjacentDuplicates(userArr, n))
            cout << "Result: Found adjacent duplicates" << endl;
        else
            cout << "Result: No adjacent duplicates found" << endl;

        delete[] userArr;
    }

    system("pause");
    return 0;
}