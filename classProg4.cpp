// Two Sum Using a Hash Map
// An online shopping portal needs to identify two products whose prices add up exactly
// to a customer’s gift-card balance.
// Given a list of distinct product prices and a target amount, find the indices of two
// prices whose sum equals the target.


#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    int n, target;
    cin >> n;

    vector<int> prices(n);
    for (int i = 0; i < n; i++) {
        cin >> prices[i];
    }

    cin >> target;

    unordered_map<int, int> mp;

    for (int i = 0; i < n; i++) {
        int need = target - prices[i];

        if (mp.find(need) != mp.end()) {
            cout << mp[need] << " " << i << endl;
            return 0;
        }

        mp[prices[i]] = i;
    }

    return 0;
}
