#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 3, 5, 6, 8, 9};
    int n = 6;
    int even = 0, odd = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    cout << "Even: " << even << ", Odd: " << odd << endl;
    return 0;
}
