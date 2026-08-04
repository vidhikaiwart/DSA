// Find the frequency of each element.

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {

    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    unordered_map<int, int> freq;

    for(int x : arr) {
        freq[x]++;
    }

    for(auto x : freq) {
        cout << x.first << " -> " << x.second << endl;
    }

    return 0;
}