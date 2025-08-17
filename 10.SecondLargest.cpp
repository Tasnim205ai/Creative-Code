#include <iostream>
using namespace std;

int main() {
    int arr[] = {4, 1, 7, 3, 9};
    int n = 5;

    int largest, secondLargest;


    if (arr[0] > arr[1]) {
        largest = arr[0];
        secondLargest = arr[1];
    } else {
        largest = arr[1];
        secondLargest = arr[0];
    }


    for (int i = 2; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    cout << "Second largest: " << secondLargest << endl;
    return 0;
}

