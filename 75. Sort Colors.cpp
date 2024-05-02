//https://leetcode.com/problems/sort-colors/description/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {2, 0, 2, 1, 1, 0};
    int low = 0, mid = 0, high = arr.size() - 1;

    while (mid <= high) {
        switch (arr[mid]) {
            case 0:
                swap(arr[low], arr[mid]);
                low++;
                mid++;
                break;
            case 1:
                mid++;
                break;
            case 2:
                swap(arr[mid], arr[high]);
                high--;
                break;
        }
    }

    // Print the sorted array
    for (int n : arr) {
        cout << n << " ";
    }
    cout << endl;

    return 0;
}

