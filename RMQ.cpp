void RangeMinimumQuery(ll n)
  {
    ll i, j;
    // fmax[i][j] được định nghĩa là chỉ số phần tử lớn nhất trong đoạn con có độ dài 2^j và bắt đầu từ i
    // fmin[i][j] được định nghĩa là chỉ số phần tử nhỏ nhất trong đoạn con có độ dài 2^j và bắt đầu từ i
    for (i = 1; i <= n; i++)
    {
      //fmax[i][0] = h[i]; // đương nhiên f[i][0] sẽ bằng chính nó do 2^0 = 1
      fmin[i][0] = h[i];
    }
    for (j = 1; (1 << j) <= n; j++) // 2 ^ 1 -> 2 ^ n
      for (i = 1; i + (1 << j)- 1 <= n; i++)
      {
    //    fmax[i][j] = max(fmax[i][j - 1],fmax[i + (1 << (j - 1))][j - 1]);
        fmin[i][j] = max(fmin[i][j - 1],fmin[i + (1 << (j - 1))][j - 1]);
      }
  }
 
ll res(ll a, ll b) {
    ll k = 0;
    while ((1 << k) <= b - a + 1) k = k + 1;
    k = k - 1;
    return (max(fmin[a][k], fmin[b - (1 << k) + 1][k]));
}
