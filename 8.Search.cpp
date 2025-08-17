#include <iostream>
using namespace std;

int main() {
    int arr[] = {4, 7, 1, 3};
    int n = 4;
    int key = 3;
    int index = -1;

    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            index = i;
            break;
        }
    }

    cout << index << endl;
    return 0;
}
