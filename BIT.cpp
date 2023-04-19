ll dp[limit3];
void update(ll p, ll val){
    for(ll i = p; i <= n; i += i & -i)
        dp[i] += val;
}
ll Get(ll p) {
    ll ans = 0;
    for(ll i = p; i; i -= i & -i)
        ans += fen[i];
    return ans;
}
