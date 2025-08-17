#include <iostream>
using namespace std;

int main() {
    int arr[] = {2, 3, 2, 4, 3, 3};
    int n = 6;

    cout << "Frequency: {";
    for (int i = 0; i < n; i++) {
        if (arr[i] == -1) continue; // Skip already counted elements

        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                arr[j] = -1; // Mark as counted
            }
        }

        cout << arr[i] << ": " << count;
        if (i != n - 1) cout << ", ";
    }
    cout << "}" << endl;

    return 0;
}

