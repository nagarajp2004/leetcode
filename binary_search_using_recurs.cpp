#include <iostream>
#include <algorithm>
using namespace std;

int binary_search_recursive(int a[], int s, int e, int t) {
    if (s <= e) {
        int mid = s + (e - s) / 2;
        if (a[mid] == t) {
            return 1;
        }
        if (a[mid] < t) {
            return binary_search_recursive(a, mid + 1, e, t);
        }
        return binary_search_recursive(a, s, mid - 1, t);
    }
    return 0; 
}

int main() {
    int a[8] = {1, 2, 3, 4, 5, 6, 9, 78};
    int n = sizeof(a) / sizeof(a[0]);
    cout << binary_search_recursive(a, 0, n - 1, 9);
    return 0;
}
