ll Binary_Search(ll first,ll second, ll x){
    ll res = 0;
    while(first <= second){
        ll mid = (first + second) / 2;
        if(a[mid] <= x){
            res = mid;
            first = mid + 1;
        }
        if(a[mid] > x){
            second = mid - 1;
        }
    }
    return res;
}
