
#include <iostream>
using namespace std;
typedef long long ll;
 
ll n,m;
ll res = 0,ans = 0,sum = 0,cnt = 0;
 
struct MaTran
{
    ll c[3][3];
    MaTran()
    {
        c[0][0] = 0;
        c[0][1] = 0;
        c[0][2] = 1;
        c[1][0] = 1;
        c[1][1] = 0;
        c[1][2] = 1;
        c[2][0] = 0;
        c[2][1] = 1;
        c[2][2] = 1;
    }
};
MaTran operator * (MaTran a, MaTran b)
{
    ll mod = m;
    MaTran res;
    for (int i = 0 ; i <= 2; i++)
        for (int j = 0; j <= 2; j++)
        {
            res.c[i][j] = 0;
            for (int k = 0; k <= 2; k++)
                res.c[i][j] = (res.c[i][j]+a.c[i][k]*b.c[k][j])%mod;
        }
    return res;
}
MaTran powermod (MaTran a, ll n)
{
    if (n == 1)
        return a;
    if (n%2 != 0)
        return powermod(a,n-1)*a;
    MaTran tmp = powermod(a,n/2);
    return tmp*tmp;
}
 
int main()
{
    cin >> n >> m;
    ll mod = m;
    MaTran A;
    //cout << A.c[0][0] <<" "<< A.c[0][1] << " " << A.c[0][2] << endl;
    //cout << A.c[1][0] <<" "<< A.c[1][1] << " " << A.c[1][2] << endl;
    //cout << A.c[2][0] <<" "<< A.c[2][1] << " " << A.c[2][2] << endl;
    A = powermod(A,n+1);
    cout << A.c[0][2];
    return 0;
}
 
