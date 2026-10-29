// Binary Search in a Descending Array
// A gaming leaderboard stores player scores in descending order. Your task is to find
// the index of a given target score efficiently.
// Given a descending-sorted array of distinct scores and a target score, return its index
// if it exists; otherwise, return −1



#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, target;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cin >> target;

    int low = 0, high = n - 1;
    int ans = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (a[mid] == target) {
            ans = mid;
            break;
        } else if (a[mid] < target) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    cout << ans << endl;
    return 0;
}

