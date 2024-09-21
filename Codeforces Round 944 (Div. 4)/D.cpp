/*
https://codeforces.com/contest/1971/problem/D
the idea of this problem is kinda interesting

You are given a binary string†. Please find the minimum number of pieces you need to cut it into, so that the resulting pieces can be rearranged into a sorted binary string.


Note that:

each character must lie in exactly one of the pieces;
the pieces must be contiguous substrings of the original string;
you must use all the pieces in the rearrangement.
† A binary string is a string consisting of characters 𝟶 and 𝟷. A sorted binary string is a binary string such that all characters 𝟶 come before all characters 𝟷.


*/
#include <iostream>
#include<algorithm>
using namespace std;

typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'
 
string s;

void solve() {
	cin >> s;
    ll res = 1;
    if(s.length() == 1){
        cout << 1 << endl;
        return;
    }
    For(ll, i, 1, s.length() - 1){
        if(s[i - 1] != s[i])
            res++;
    }
    For(ll, i, 1, s.length() - 1){
        if(s[i - 1] == '0' && s[i] == '1'){
            res --;
            break;
        }
    }
    cout << res << endl;
}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
}