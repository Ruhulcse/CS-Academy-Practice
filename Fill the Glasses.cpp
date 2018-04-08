#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, k; cin >> n >> k;
    vector<int> els(n);
    for (auto& itr : els) {
        cin >> itr;
    }
    sort(els.begin(), els.end());
    int sum = 0;
    for (int i = 0; i < k; i += 1) {
        sum += els[i];
    }

    int ans = (sum  + 99) / 100;
    cout << ans << '\n';
    return 0;
}
