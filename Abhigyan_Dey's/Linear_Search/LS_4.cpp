//
// Created by ADMIN on 09-12-2025.
//
// C++ Program to implement linear search using
// recursion
#include <bits/stdc++.h>
using namespace std;

int linearSearch(vector<int>& v, int key, int i) {

    // If we have traversed the entire vector
    // and the key is not found
    if (i == v.size()) {
        return -1;
    }

    // If the current element matches the key
    if (v[i] == key) {
        return i;
    }

    // Recursive call to check the next element
    return linearSearch(v, key, i + 1);
}

int main() {
    vector<int> v = {1, 2, 3, 4, 5, 8, 9, 11};

    // Value to search
    int key;
    cin >> key;

    // Searching the key in the vector v
    int i = linearSearch(v, key, 0);

    // Checking if element is found or not
    if (i != -1) {
        cout << key << " Found at Position: "
          << i + 1;
    } else {
        cout << key << " NOT found.";
    }

    return 0;
}