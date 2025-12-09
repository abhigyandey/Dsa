#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int search(int k, vector<int>& arr) {
        for (int i = 0; i < (int)arr.size(); i++) {
            if (arr[i] == k) {
                return i;          // return 0-based index if found
            }
        }
        return -1;                 // return -1 if not found
    }
};

int main() {
    int n;
    cin >> n;                      // size of array

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];             // input array elements
    }

    int k;
    cin >> k;                      // key to search

    Solution obj;
    int index = obj.search(k, arr);

    if (index != -1) {
        cout << k << " found at index " << index << '\n';
    } else {
        cout << k << " not found\n";
    }

    return 0;
}
//
// Created by ADMIN on 09-12-2025.
//