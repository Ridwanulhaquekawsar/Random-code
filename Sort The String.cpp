#include<bits/stdc++.h>
using namespace std;
#define FastIO() ios::sync_with_stdio(0),cin.tie(0)
using ll = long long int;
#define nl '\n'

#define out(x) cout << (x) << nl
#define in cin >>

#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()

#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define Yes cout << "Yes\n"
#define No cout << "No\n"

#define f first
#define s second
#define pb push_back

#define pll pair<ll, ll>
#define vll vector<ll>

#define rep(i, n) for(ll i = 0; i < n; i++)
#define rrep(i, n) for(ll i = n - 1; i >= 0; i--)
#define rep1(i, a, b) for(ll i = a; i < b; i++)
#define rrep1(i, a, b) for(ll i = b - 1; i >= a; i--)

/*
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

template<typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
*/

ll t;
ll n;
string s;
bool ok;
ll left_0, right_0;
ll ans;

void solve(){
    in n >> s;
    
    ans = 0;
    left_0 = s.find('0');
    right_0 = s.rfind('0');
    
    if(left_0 == -1) out(0);
    else{
        if(s[0] == '1') ans++;
    
        ok = 0;
    
        for(ll i = left_0; i <= right_0; i++){
            if(s[i] == '1') ok = 1;
            else{
                if(ok){
                    ans++;
                    ok = 0;
                }
            }
        }
    
        out(ans);
    }
}

int main(){
    FastIO(); 
    
    t = 1;
    cin >> t;
    while(t--) solve();
}
