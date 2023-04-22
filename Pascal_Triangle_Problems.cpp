#include <iostream>
using namespace std;
typedef long long ll;
const ll base = 1e9 + 7;

struct MaTran
{
    ll c[2][2];
    MaTran()
    {
        c[0][0] = 0;
        c[0][1] = 1;
        c[1][0] = 1;
        c[1][1] = 1;
    }
};

MaTran operator * (MaTran a, MaTran b)
{
    MaTran res;
    for (int i=0; i<=1; i++)
        for (int j=0; j<=1; j++)
        {
            res.c[i][j] = 0;
            for (int k=0; k<=1; k++)
                res.c[i][j] = (res.c[i][j]+a.c[i][k]*b.c[k][j])%base;
        }
    return res;
}

MaTran powermod (MaTran a, ll n)
{
    if (n==1)
        return a;
    if (n%2!=0)
        return powermod(a,n-1)*a;
    MaTran tmp = powermod(a,n/2);
    return tmp*tmp;
}

int main()
{
    ll n, test;
    cin >> test;
    MaTran A;
    while(test--){
        MaTran A;
        cin >> n;
        A = powermod(A,n+ 1);
        cout << A.c[0][0] << endl;
    }
    return 0;
}
