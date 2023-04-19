ll phi(ll n){
    ll ans = n;
    ll kd = 2, cnt;
    while(kd * kd <= n){
        cnt = 0;
        while(n % kd == 0){
            n /= kd;
            cnt++;
        }
        if(cnt>0) ans -= ans / kd;
        kd++;
    }
    if(n > 1) ans -= ans / n;
    return ans;
}
// phi(n) = các số nguyên tố cùng nhau từ 1-> n so với n
