#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        long long k;
        cin >> n >> k;
        
        long long max_possible = (long long)(n - 1) * n / 2;
        
        if (k > max_possible) {
            cout << "No" << endl;
            continue;
        }
        
        cout << "Yes" << endl;
        vector<int> p(n);
        
        // Initialize the permutation as [1, 2, ..., n]
        for (int i = 0; i < n; ++i) {
            p[i] = i + 1;
        }
        
        long long current_value = 0;
        
        // Adjust the permutation to achieve the desired Manhattan value
        for (int i = n - 1; i >= 0; --i) {
            int max_additional_value = i;
            if (current_value + max_additional_value <= k) {
                current_value += max_additional_value;
                swap(p[i], p[n - 1 - i]);
            } else {
                // When adding the whole max_additional_value exceeds k,
                // we perform a partial swap to just reach k
                int needed_value = k - current_value;
                if (needed_value > 0) {
                    swap(p[n - 1 - needed_value], p[n - 1 - i]);
                }
                break;
            }
        }
        
        // Output the resulting permutation
        for (int i = 0; i < n; ++i) {
            cout << p[i] << " ";
        }
        cout << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
