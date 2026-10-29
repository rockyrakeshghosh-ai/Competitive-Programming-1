//  Single Number (Bit Manipulation)
//  An office RFID gate logs every employee twice: once when entering and once when leaving.
//  However, one employee’s ID appears only once. 
//  Given a list of n employee IDs in which every ID appears exactly twice except one, find the ID that appears only once.


#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int ans = 0;

    for (int i = 0; i < n; i++) {
        ans = ans ^ a[i];
    }

    cout << ans << endl;

    return 0;
}
