#include <iostream>
#include <vector>
#include <string>

using namespace std;

const int MOD = 1e9 + 7;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        string binaryString;
        cin >> binaryString;

        int n = binaryString.size();
        vector<int> prefixSum(n + 1);
        vector<int> count(2 * n + 2);

        // Calculate prefix sum
        for (int i = 0; i < n; i++) {
            prefixSum[i + 1] = prefixSum[i] + (binaryString[i] == '1' ? 1 : -1);
        }
        for(int i = 0; i < n; i++)
            cout << prefixSum[i] << " ";
            

        // Initialize count array
        for (int i = 0; i < 2 * n + 2; i++) {
            count[i] = 0;
        }

        long long answer = 0;
        for (int j = 1; j <= n; j++) {
            // Update count array
            count[prefixSum[j - 1] + n] += j;

            // Calculate answer
            answer = (answer + (long long)count[prefixSum[j] + n] * (n - j + 1)) % MOD;
        }

        cout << answer << endl;
    }

    return 0;
}