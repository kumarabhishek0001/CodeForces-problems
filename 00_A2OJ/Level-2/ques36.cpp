#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> heights(n);
    for (int i = 0; i < n; ++i) {
        cin >> heights[i];
    }

    int minDiff = abs(heights[0] - heights[n-1]);
    int index1 = n-1, index2 = 0;

    for (int i = 0; i < n - 1; ++i) {
        int diff = abs(heights[i] - heights[i+1]);
        if (diff < minDiff) {
            minDiff = diff;
            index1 = i;
            index2 = i + 1;
        }
    }

    // Output 1-based indices
    cout << index1 + 1 << " " << index2 + 1 << endl;
    return 0;
}
