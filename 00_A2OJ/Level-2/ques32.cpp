#include <iostream>
#include <map>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    map<int, pair<int, int>> data;  // key: child index, value: {atleast, current}

    for (int i = 1; i <= n; i++) {
        int atleast;
        cin >> atleast;
        data[i] = {atleast, m};  // initialize current with m
    }

    int lastChild = 0;

    while (!data.empty()) {
        for (auto it = data.begin(); it != data.end(); ) {
            if (it->second.second < it->second.first) {
                it->second.second += m;  // give more chocolates
                ++it;
            } else {
                lastChild = it->first;
                it = data.erase(it);  // erase and continue
            }
        }
    }

    cout << lastChild << endl;

    return 0;
}
