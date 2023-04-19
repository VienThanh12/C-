#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;
typedef long long ll;
const ll limit = 2 * 1e4;
 
ll n, m;
pair<int, pair<int, int>> a[limit];
ll root[limit], par[limit];
ll u, v;
ll res = 0, ans = 0, sum = 0;
 
// cây khung nhỏ nhất là cây có trọng số n-1 cạnh nhỏ nhất
// kruskal ý tưởng sẽ là tham làm tìm coi cạnh nào nhỏ nhất và sẽ ghép nó lại
ll findroot(ll u)
{
    while (root[u] >= 0)
        u = root[u];// tìm gốc của u mà ở dưới gán
    return u;
}
 
void merge(int x, int y)
{
 
    if (root[x] > root[y])// ghép lớn vào nhỏ vì nếu ngược lại lâu hơn
        swap(x, y);
 
    root[x] += root[y];// đếm x có là cha của bao nhiêu gốc
    root[y] = x;// gán đỉnh y có gốc là  x
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    cin >> n >> m;
    for (ll i = 1; i <= m; i++)
        cin >> a[i].second.first >> a[i].second.second >> a[i].first;
 
    sort(a + 1, a + 1 + m);
 
    for (ll i = 1; i <= n; i++)
        root[i] = -1;       
 
    for (ll i = 1; i <= m; i++)
    {
        u = a[i].second.first;
        v = a[i].second.second;
        u = findroot(u); // tìm gốc của đỉnh u 
        v = findroot(v); // // tìm gốc của đỉnh v 
       // cout << u <<" "<< v <<endl;
        if (u != v) // nếu gốc v = gốc u thì cùng thành phân liên thông nên không làm nếu làm bị thừa và tạo một chu trình
        {
            merge(u, v);
            res += a[i].first;
        }
    }
   // cout << endl;
  //  for(ll i = 1; i <= n; i++) cout << root[i] << endl;
    cout << res;
}
