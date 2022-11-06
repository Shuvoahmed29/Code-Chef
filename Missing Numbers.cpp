#include <bits/stdc++.h>
using namespace std;
/*-----------------------SHUVO AHMED---------------------------*/
#define nl '\n'
typedef long long int ll;
#define Sort(x) sort(x.begin(), x.end())
#define Reverse(x) reverse(x.begin(), x.end())
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * (b / gcd(a, b)))
#define sq(x) (x) * (x)
#define For(i, n) for (ll i = 0; i < n; i++)
#define FOR(i, x, y) for (ll i = x; i <= y; i++)

#define vs vector<string>
#define vl vector<ll>
#define pb(x) push_back(x)
#define mp(a, b) make_pair(a, b)
#define vp vector<pair<ll, ll>>
#define Pin(x, y) pb(mp(x, y))
#define sl set<ll>
#define Rs set<ll, greater<ll>> // Reverse Set
#define In(x) insert(x)         // or use emplace(x)
#define lb(x) lower_bound(x)
#define ub(x) upper_bound(x)

#define ff first
#define ss second
#define rr return 0

#define yes cout << "YES\n"
#define no cout << "NO\n"
#define tc       \
    ll t;        \
    cin >> t;    \
    while (t--)  \
    {            \
        solve(); \
    }
inline void solve();
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Shuvo cout.tie(NULL);
#define mtc               \
    int main()            \
    {                     \
        Code By Shuvo tc; \
        rr;               \
    }
#define shuvo                  \
    int main()                 \
    {                          \
        Code By Shuvo solve(); \
        rr;                    \
    }

#define min3(a, b, c) min(a, min(b, c))
#define min4(a, b, c, d) min(a, min(b, min(c, d)))
#define max3(a, b, c) max(a, max(b, c))
#define max4(a, b, c, d) max(a, max(b, max(c, d)))
bool isPrime(ll n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    return true;
}
#define mod 1000000007
#define pi acos(-1)
/********If Something goes over your head,run after it.********/ // shuvo
/*-----------------------SHUVO AHMED---------------------------*/ mtc inline void solve()
{
    ll arr[4];
    For(i, 4) cin >> arr[i];
    sort(arr, arr + 4);
    ll a1 = (arr[2] + arr[0]) / 2;
    ll b1 = arr[2] - a1;

    ll a2 = (arr[2] + arr[1]) / 2;
    ll b2 = arr[2] - a2;

    ll a3 = (arr[3] + arr[0]) / 2;
    ll b3 = arr[3] - a3;

    ll a4 = (arr[3] + arr[1]) / 2;
    ll b4 = arr[3] - a4;

    if (a1 >= 1 && b1 >= 1 && a1 <= 10000 && b1 <= 10000 && (a1 * b1 == arr[3]) && ((a1 / b1) == arr[1]))
    {
        cout << a1 << " " << b1 << nl;
        return;
    }

    if (a2 >= 1 && b2 >= 1 && a2 <= 10000 && b2 <= 10000 && (a2 * b2 == arr[3]) && ((a2 / b2) == arr[0]))
    {
        cout << a2 << " " << b2 << nl;
        return;
    }

    if (a3 >= 1 && b3 >= 1 && a3 <= 10000 && b3 <= 10000 && (a3 * b3 == arr[2]) && ((a3 / b3) == arr[1]))
    {
        cout << a3 << " " << b3 << nl;
        return;
    }

    if (a4 >= 1 && b4 >= 1 && a4 <= 10000 && b4 <= 10000 && (a4 * b4 == arr[2]) && ((a4 / b4) == arr[0]))
    {
        cout << a4 << " " << b4 << nl;
        return;
    }
    cout << -1 << " " << -1 << nl;
}