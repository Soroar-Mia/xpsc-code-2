#include<bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define mod 1000000007
#define INF 1e18
// #define int long long int
#define endl "\n"
#define pb  push_back
#define ppb pop_back
#define mp  make_pair
#define mt  make_tuple
#define ff  first
#define ss  second
#define pii pair<int,int>
#define pll pair<ll,ll>
#define vi  vector<int>
#define vll  vector<long long>
#define mii map<int,int>
#define pqb priority_queue<int>//priority queue big
#define pqs priority_queue<int,vi,greater<int> >//priority queue small
#define setbits(x)      __builtin_popcountll(x)//couts set bits
#define clz(x)          __builtin_clz(x)//counts leading zeros
#define ctz(x)          __builtin_ctz(x)//counts trailing zeros
#define ps(x,y)         fixed<<setprecision(y)<<x
#define range(a,b)      substr(a,b-a+1)
#define w(x)            int x; cin>>x; while(x--)
#define PI 3.141592653589793238462
mt19937                 rng(chrono::steady_clock::now().time_since_epoch().count());
//shuffle(arr,arr+n,rng) to shuffle array elements

#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;


#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

void _print(ll t)
{
    cerr << t;
}
void _print(int t)
{
    cerr << t;
}
void _print(string t)
{
    cerr << t;
}
void _print(char t)
{
    cerr << t;
}
void _print(lld t)
{
    cerr << t;
}
void _print(double t)
{
    cerr << t;
}
void _print(ull t)
{
    cerr << t;
}

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p)
{
    cerr << "{";
    _print(p.ff);
    cerr << ",";
    _print(p.ss);
    cerr << "}";
}
template <class T> void _print(vector <T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T> void _print(set <T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T> void _print(multiset <T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T, class V> void _print(map <T, V> v)
{
    cerr << "[ ";
    for (auto i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}

ll gcd(ll a, ll b)
{
    if (b > a)
    {
        return gcd(b, a);
    }
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}
ll expo(ll a, ll b, ll m)
{
    ll res = 1;
    while (b > 0)
    {
        if (b & 1)res = (res * a) % m;
        a = (a * a) % m;
        b = b >> 1;
    }
    return res;
}
ll mminvprime(ll a, ll b)
{
    return expo(a, b - 2, b);
}
ll mod_add(ll a, ll b, ll m)
{
    a = a % m;
    b = b % m;
    return (((a + b) % m) + m) % m;
}
ll mod_mul(ll a, ll b, ll m)
{
    a = a % m;
    b = b % m;
    return (((a * b) % m) + m) % m;
}
ll mod_sub(ll a, ll b, ll m)
{
    a = a % m;
    b = b % m;
    return (((a - b) % m) + m) % m;
}
ll mod_div(ll a, ll b, ll m)
{
    a = a % m;    //only for prime m
    b = b % m;
    return (mod_mul(a, mminvprime(b, m), m) + m) % m;
}
// debug doesnt print all variables at a time

#define loop(i, j, k) for (ll i = j; i < k; i += 1)
#define rloop(i, j, k) for (ll i = j; i >= k; i -= 1)
#define rep(i, j) loop(i, 0, j)
#define rrep(i, j) rloop(i, j, 0)

struct dsu
{

    int n, set_size, *parent, *rank;
    dsu() {}
    dsu(int a)
    {
        n = set_size = a;
        parent = new int[n + 1];
        rank = new int[n + 1];
        for (int i = 1; i <= n; i++) parent[i] = i, rank[i] = 1;
    }
    int find(int x)
    {
        if (x != parent[x]) return parent[x] = find(parent[x]);
        return x;
    }
    void merge(int x, int y)
    {
        int xroot = find(x), yroot = find(y);
        if (xroot != yroot)
        {
            if (rank[xroot] >= rank[yroot])
            {
                parent[yroot] = xroot;
                rank[xroot] += rank[yroot];
            }
            else
            {
                parent[xroot] = yroot;
                rank[yroot] += rank[xroot];
            }
            set_size -= 1;
        }
    }
    void reset()
    {
        set_size = n;
        for (int i = 1; i <= n; i++)parent[i] = i, rank[i] = 1;
    }
    int size()
    {
        return set_size;
    }
    void print()
    {
        for (int i = 1; i <= n; i++)cout << i << "->" << parent[i] << "\n";
    }
};

int32_t main()
{
    FIO;
#ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
#endif

    // w(t)
    {
        int n;
        cin >> n;
        vector<pii>edges(n - 1);
        for (int i = 0; i < n - 1; i++)
        {
            int a, b;
            cin >> a >> b;
            edges[i] = {a, b};
        }
        dsu d(n);
        vector<pii>waste;
        for (auto edge : edges)
        {
            int a = edge.ff;
            int b = edge.ss;
            if (d.find(a) == d.find(b))
            {
                waste.pb({a, b});
            }
            else
            {
                d.merge(a, b);
            }
        }
        int ans = d.size() - 1;
        cout << ans  << endl;
        vector<pii>useful;
        for (int i = 2; i <= n; i++)
        {
            if (d.find(1) != d.find(i))
            {
                d.merge(1, i);
                useful.pb({1, i});
            }
        }
        for (int i = 0; i < ans; i++)
        {
            cout << waste[i].ff << " " << waste[i].ss << " " << useful[i].ff << " " << useful[i].ss << endl;
        }
    }
    return 0;
}
