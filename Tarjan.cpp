#include <bits/stdc++.h>
#define fi first
#define se second
#define REP(i, a, b) for (int i = (a); i <= (b); ++i)
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define FORD(i, a, b) for(int i = (a); i > (b); --i)
#define REPD(i, a, b) for(int i = (a); i >=(b); --i)
#define TR(it, a) for(__typeof(a.begin()) it = a.begin(); it != a.end(); ++it)
#define endl '\n'
#define mp make_pair
#define pb push_back
#define ins insert
#define all(x) (x).begin(),(x).end()
#define SZ(x) ((int)(x).size())
#define unmap unordered_map
#define lb lower_bound //first pos >= val
#define ub upper_bound // first pos > val
#define debug(a) cout << a << endl
using namespace std;
 
typedef long long ll;
typedef long double ld;
typedef pair <ll, ll> pll;
typedef pair <int, int> pii;
typedef vector <int> vi;
typedef vector <ll> vll;
 
const ll maxN = 1e18;
const ll minN = -1e18;
const ll MOD = 1e9 + 7;
const ll MOD1 = 998244353;
const int bignumlen = 2200;
const int Blen = 8;
const ll base = 100000000;
const int baseHash = 31;
const ld PI = acos(-1);
 
//Remember limit for IT, etc...
const ll limit = 1e4 + 5;
const ll limit1 = 1e6 + 5;
 
ll n, m;
vll g[limit], s;
ll cnt = 0, ans = 0;
bool vis[limit];
ll num[limit]; //order of vertex while dfs
ll low[limit]; //the lowest order of the vertex which can go from this vertex
 
void dfs(ll u) {
    num[u] = low[u] = ++cnt;// firstly num = low because of definition of this array :)
    // we put it = cnt to make the order of vertex
 
    s.push_back(u); //push every vertex has dfs so we didnt need to dfs again .-.
 
    for (auto it : g[u]) {
        if (!vis[it]) {
            if (num[it] > 0) low[u] = min(low[u], num[it]); //if num > 0 it's mean that u have visited it so u dont need to dfs again
                                // take min beacause of backward arc
            else {
                dfs(it);
                low[u] = min(low[u], low[it]);
                //if we didnt visit it first, let visit it and take min of low
            }
        }
    }
 
    if (low[u] == num[u]) {
        //it mean that your dfs is a circle when u comeback with this vertex.
        //if this happen when we finish dfs all edge, it must be strong connected component (SCC)
        ++ans; //so we increase ans
 
        while (1) { //this site to check every vertex we have visited so we dont need to visit it again in other dfs
            ll v = s.back();
            vis[v] = true;
            s.pop_back();
            if (u == v) break; //remember some vertex from the last dfs is not in this SCC so we dont need to erase it
            //just erase until u = v;
        }
    }
}
 
void solveProblem() {
    //------------------------------------MAIN IDEA---------------------------------------------
    //The main idea of "Tarjan" is check if there is a vertice which can go back to its ancestor.
    //If it happen, all vertices in that way will create the SCC.
 
    //To do that we create 2 array are num and low, num is the first time we visit vertice and low is
    //the farthest ancestor this vertice can visit.
    //If num[i] == low[i], it mean that there is a loop begin at i and end at i, so we have 1 SCC.
    //-------------------------------------------------------------------------------------------
 
    REP(i, 1, n) {
        if (!num[i]) dfs(i);//if num[i] = 0, that mean it wasnt visited so we visit it.
    }
 
    cout << ans;
}
 
void fastInput() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
 
void readInput() {
    cin >> n >> m;
    REP(i, 1, m) {
        ll u, v;
        cin >> u >> v;
        g[u].pb(v);
    }
    cout << ans;
}
 
int main() {
    fastInput();
    readInput();
    solveProblem();
}
