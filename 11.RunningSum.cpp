#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4};
    int n = 4;
    int sum = 0;

    cout << "Running Sum: [";
    for (int i = 0; i < n; i++) {
        sum += arr[i];
        cout << sum;
        if (i != n - 1) cout << ", ";
    }
    cout << "]" << endl;
    return 0;
}
