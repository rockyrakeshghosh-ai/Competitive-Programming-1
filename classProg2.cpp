// Remove Duplicates Using a Hash Set
// Students register for a technical fest through an online form. Some students submit
// the form multiple times, resulting in duplicate roll numbers in an unsorted list.
// Given an unsorted list of roll numbers, remove duplicates while preserving the order
// of the first occurrence of each roll number.


#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    unordered_set<int> seen;
    vector<int> result;

    for (int i = 0; i < n; i++) {
        cin >> a[i];

        if (seen.find(a[i]) == seen.end()) {
            seen.insert(a[i]);
            result.push_back(a[i]);
        }
    }

    for (int x : result) {
        cout << x << " ";
    }

    cout << endl;
    return 0;
}
