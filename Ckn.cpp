ll c(ll k, ll n) {
    if(k > n) return 0;
	if (n == k || k == 0) return 1;
	return f[n] * pow((f[k] * f[n - k] % mod), mod - 2) % mod;
}
